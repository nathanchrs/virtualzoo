#include "FrameBuffer.h"

#ifdef _WIN32
    // Windows-specific implementation
	#include <windows.h>

	void clearScreen(){
		system("cls");
	}
#elif __linux__
    // Linux-specific implementation
    #include <cstdlib>

    void clearScreen() {
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
        "40", "41", "42", "43", "44", "45", "46", "47" // background colors only support the faint 8 colors
};

FrameBuffer::FrameBuffer(int rows, int cols, bool colored) : rows(rows), cols(cols), colored(colored) {
    contents = new char[rows * cols];
    fgColors = new Color[rows * cols];
    bgColors = new Color[rows * cols];
    inputPrompt = "";
    clear();
}

FrameBuffer::~FrameBuffer() {
    delete[] contents;
    delete[] fgColors;
    delete[] bgColors;
}

void FrameBuffer::clear() {
    for (int i = 0; i < rows * cols; i++) {
        contents[i] = BLANK;
        fgColors[i] = TRANSPARENT;
        bgColors[i] = TRANSPARENT;
    }
}

void FrameBuffer::drawPoint(const Point &p, char content, FrameBuffer::Color fgColor, FrameBuffer::Color bgColor) {
    if (p.inArea(rows, cols)) {
        contents[idx(p)] = content;
        if (fgColor != TRANSPARENT) fgColors[idx(p)] = fgColor;
        if (bgColor != TRANSPARENT) bgColors[idx(p)] = bgColor;
    }
}

void FrameBuffer::drawHorizontalLine(const Point &p1, const Point &p2, char content, FrameBuffer::Color fgColor,
                                     FrameBuffer::Color bgColor) {
    int i1 = p1.getC() < p2.getC() ? p1.getC() : p2.getC();
    int i2 = p1.getC() < p2.getC() ? p2.getC() : p1.getC();
    for (int i = i1; i <= i2; i++) drawPoint(Point(p1.getR(), i), content, fgColor, bgColor);
}

void FrameBuffer::drawVerticalLine(const Point &p1, const Point &p2, char content, FrameBuffer::Color fgColor,
                                   FrameBuffer::Color bgColor) {
    int i1 = p1.getR() < p2.getR() ? p1.getR() : p2.getR();
    int i2 = p1.getR() < p2.getR() ? p2.getR() : p1.getR();
    for (int i = i1; i <= i2; i++) drawPoint(Point(i, p1.getC()), content, fgColor, bgColor);
}

void FrameBuffer::drawTextBox(const Point &topLeft, const Point &bottomRight, string str, FrameBuffer::Color fgColor,
                              FrameBuffer::Color bgColor) {
    if (str.size() > 0) {
        int it = 0;
        bool done = false;
        for (int r = topLeft.getR(); r <= bottomRight.getR() && !done; r++) {
            for (int c = topLeft.getC(); c <= bottomRight.getC() && !done; c++) {
                if (str[it] == '\n') {
                    it++;
                    if (it >= str.size()) done = true;
                    break;
                }
                Point p = Point(r, c);
                if (p.inArea(rows, cols)) {
                    contents[idx(p)] = str[it];
                    if (fgColor != TRANSPARENT) fgColors[idx(p)] = fgColor;
                    if (bgColor != TRANSPARENT) bgColors[idx(p)] = bgColor;
                }
                it++;
                if (it >= str.size()) done = true;
            }
        }
    }
}

void FrameBuffer::drawRectangle(const Point &topLeft, const Point &bottomRight, char borderCharacter,
                                FrameBuffer::Color textColor, FrameBuffer::Color bgColor,
                                FrameBuffer::Color borderColor) {
    for (int r = topLeft.getR(); r <= bottomRight.getR(); r++) {
        for (int c = topLeft.getC(); c <= bottomRight.getC(); c++) {
            Point p = Point(r, c);
            if (p.inArea(rows, cols)) {
                if (r == topLeft.getR() || r == bottomRight.getR() || c == topLeft.getC() || c == bottomRight.getC()) {
                    contents[idx(p)] = borderCharacter;
                    if (textColor != TRANSPARENT) fgColors[idx(p)] = textColor;
                    if (borderColor != TRANSPARENT) bgColors[idx(p)] = borderColor;
                } else {
                    if (bgColor != TRANSPARENT) {
                        contents[idx(p)] = BLANK;
                        bgColors[idx(p)] = bgColor;
                    }
                }
            }
        }
    }
}

ostream &operator<<(ostream &os, const FrameBuffer &fb) {
    clearScreen(); // WARNING! Side effect

    string outputBuffer = "";
    for (int r = 0; r < fb.rows; r++) {
        for (int c = 0; c < fb.cols; c++) {
            Point p = Point(r, c);

            // Output color-specifying control characters
            if (fb.colored) {
                outputBuffer += (FrameBuffer::CS_INITIATOR + FrameBuffer::RESET);
                if (fb.fgColors[fb.idx(p)] != FrameBuffer::TRANSPARENT) {
                    outputBuffer += (FrameBuffer::FG_COLOR_CONSTANTS[fb.fgColors[fb.idx(p)]] + ";");
                }
                if (fb.bgColors[fb.idx(p)] != FrameBuffer::TRANSPARENT) {
                    outputBuffer += FrameBuffer::BG_COLOR_CONSTANTS[fb.bgColors[fb.idx(p)]];
                }
                outputBuffer += FrameBuffer::CS_TERMINATOR;
            }

            // Output actual character to be printed
            outputBuffer += fb.contents[fb.idx(p)];

            // Output reset control characters
            if (fb.colored) {
                outputBuffer += (FrameBuffer::CS_INITIATOR + FrameBuffer::RESET + ";" + FrameBuffer::CS_TERMINATOR);
            }
        }

        // Output newline
        outputBuffer += '\n';
    }

    outputBuffer += fb.inputPrompt; // Add input prompt text at the bottom of the screen
    os << outputBuffer; // Actually print the output buffer's contents to the output stream
    return os;
}

