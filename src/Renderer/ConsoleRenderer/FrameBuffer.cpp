#include "FrameBuffer.h"

#ifdef _WIN32
  // Windows-specific implementation
	#include <windows.h>

	void FrameBuffer::clearScreen(){
		system("cls");
	}
#elif __linux__
  // Linux-specific implementation
  #include <cstdlib>
#include <iostream>

void FrameBuffer::ClearScreen() {
    system("clear");
  }
#endif

const char FrameBuffer::BLANK = ' ';
const string FrameBuffer::CS_INITIATOR = "\033[";
const string FrameBuffer::CS_TERMINATOR = "m";
const string FrameBuffer::RESET = "0";

const string FrameBuffer::FG_COLOR_CONSTANTS[] = {
  "", // unused (transparent)
  "30", "31", "32", "33", "34", "35", "36", "37",
  "1;30", "1;31", "1;32", "1;33", "1;34", "1;35", "1;36", "1;37"
};

const string FrameBuffer::BG_COLOR_CONSTANTS[] = {
  "", // unused (transparent)
  "40", "41", "42", "43", "44", "45", "46", "47",
  // background colors only support the faint 8 colors
  "40", "41", "42", "43", "44", "45", "46", "47"
};

FrameBuffer::FrameBuffer(int rows, int cols, bool colored) : rows(rows),
                                                             cols(cols),
                                                             colored(colored) {
  contents = new char[rows * cols];
  fg_colors = new Color[rows * cols];
  bg_colors = new Color[rows * cols];
  input_prompt = "";
  Clear();
}

FrameBuffer::~FrameBuffer() {
  delete[] contents;
  delete[] fg_colors;
  delete[] bg_colors;
}

void FrameBuffer::Clear() {
  for (int i = 0; i < rows * cols; i++) {
    contents[i] = BLANK;
    fg_colors[i] = TRANSPARENT;
    bg_colors[i] = TRANSPARENT;
  }
}

void FrameBuffer::DrawPoint(const Point &p, char content,
                            FrameBuffer::Color fg_color,
                            FrameBuffer::Color bg_color) {
  if (p.InArea(rows, cols)) {
    contents[idx(p)] = content;
    if (fg_color != TRANSPARENT) fg_colors[idx(p)] = fg_color;
    if (bg_color != TRANSPARENT) bg_colors[idx(p)] = bg_color;
  }
}

void FrameBuffer::DrawHorizontalLine(const Point &p1, const Point &p2,
                                     char content, FrameBuffer::Color fg_color,
                                     FrameBuffer::Color bg_color) {
  int i1 = p1.GetC() < p2.GetC() ? p1.GetC() : p2.GetC();
  int i2 = p1.GetC() < p2.GetC() ? p2.GetC() : p1.GetC();
  for (int i = i1; i <= i2; i++) {
    DrawPoint(Point(p1.GetR(), i), content, fg_color, bg_color);
  }
}

void FrameBuffer::DrawVerticalLine(const Point &p1, const Point &p2,
                                   char content, FrameBuffer::Color fg_color,
                                   FrameBuffer::Color bg_color) {
  int i1 = p1.GetR() < p2.GetR() ? p1.GetR() : p2.GetR();
  int i2 = p1.GetR() < p2.GetR() ? p2.GetR() : p1.GetR();
  for (int i = i1; i <= i2; i++) {
    DrawPoint(Point(i, p1.GetC()), content, fg_color, bg_color);
  }
}

void FrameBuffer::DrawTextBox(const Point &top_left, const Point &bottom_right,
                              string str, FrameBuffer::Color fg_color,
                              FrameBuffer::Color bg_color) {
  if (str.size() > 0) {
    int it = 0;
    bool done = false;
    for (int r = top_left.GetR(); r <= bottom_right.GetR() && !done; r++) {
      for (int c = top_left.GetC(); c <= bottom_right.GetC() && !done; c++) {
        if (str[it] == '\n') {
          it++;
          if (it >= str.size()) done = true;
          break;
        }
        Point p = Point(r, c);
        if (p.InArea(rows, cols)) {
          contents[idx(p)] = str[it];
          if (fg_color != TRANSPARENT) fg_colors[idx(p)] = fg_color;
          if (bg_color != TRANSPARENT) bg_colors[idx(p)] = bg_color;
        }
        it++;
        if (it >= str.size()) done = true;
      }
    }
  }
}

void FrameBuffer::DrawRectangle(const Point &top_left,
                                const Point &bottom_right,
                                char border_character,
                                FrameBuffer::Color text_color,
                                FrameBuffer::Color bg_color,
                                FrameBuffer::Color border_color) {

  for (int r = top_left.GetR(); r <= bottom_right.GetR(); r++) {
    for (int c = top_left.GetC(); c <= bottom_right.GetC(); c++) {
      Point p = Point(r, c);
      if (p.InArea(rows, cols)) {
        if (r == top_left.GetR() || r == bottom_right.GetR()
            || c == top_left.GetC() || c == bottom_right.GetC()) {
          contents[idx(p)] = border_character;
          if (text_color != TRANSPARENT) fg_colors[idx(p)] = text_color;
          if (border_color != TRANSPARENT) bg_colors[idx(p)] = border_color;
        } else {
          if (bg_color != TRANSPARENT) {
            contents[idx(p)] = BLANK;
            bg_colors[idx(p)] = bg_color;
          }
        }
      }
    }
  }
}

ostream &operator<<(ostream &os, const FrameBuffer &fb) {
  string outputBuffer = "";
  for (int r = 0; r < fb.rows; r++) {
    for (int c = 0; c < fb.cols; c++) {
      Point p = Point(r, c);
      // Output color-specifying control characters
      if (fb.colored) {
        outputBuffer += (FrameBuffer::CS_INITIATOR + FrameBuffer::RESET);
        if (fb.fg_colors[fb.idx(p)] != FrameBuffer::TRANSPARENT) {
          FrameBuffer::Color color = fb.fg_colors[fb.idx(p)];
          outputBuffer += (FrameBuffer::FG_COLOR_CONSTANTS[color] + ";");
        }
        if (fb.bg_colors[fb.idx(p)] != FrameBuffer::TRANSPARENT) {
          FrameBuffer::Color color = fb.bg_colors[fb.idx(p)];
          outputBuffer += FrameBuffer::BG_COLOR_CONSTANTS[color];
        }
        outputBuffer += FrameBuffer::CS_TERMINATOR;
      }
      // Output actual character to be printed
      outputBuffer += fb.contents[fb.idx(p)];
      // Output reset control characters
      if (fb.colored) {
        outputBuffer += (FrameBuffer::CS_INITIATOR + FrameBuffer::RESET + ";"
                         + FrameBuffer::CS_TERMINATOR);
      }
    }
    // Output newline
    outputBuffer += '\n';
  }

  // Add input prompt text at the bottom of the screen
  outputBuffer += fb.input_prompt;

  // Print the output buffer's contents to the output stream
  os << outputBuffer;
  return os;
}
