#ifndef VIRTUALZOO_FRAMEBUFFER_H
#define VIRTUALZOO_FRAMEBUFFER_H

#include <string>
#include <ostream>
#include "../Point.h"
using namespace std;

class FrameBuffer {
public:

    enum Color {
        TRANSPARENT,

        BLACK,
        MAROON,
        GREEN,
        BROWN,
        DARK_BLUE,
        PURPLE,
        TEAL,
        WHITE,

        GRAY,
        RED,
        LIME,
        YELLOW,
        BLUE,
        PINK,
        CYAN,
        LIGHT_GRAY
    };

    FrameBuffer(int rows, int cols, bool colored);

    ~FrameBuffer();

    int getRows() const {
        return rows;
    }

    int getCols() const {
        return cols;
    }

    bool isColored() const {
        return colored;
    }

    void setColored(bool colored) {
        FrameBuffer::colored = colored;
    }

    string getInputPrompt() const {
        return inputPrompt;
    }

    void setInputPrompt(const string &inputPrompt) {
        FrameBuffer::inputPrompt = inputPrompt;
    }

    void clear();

    void drawPoint(const Point &p, char content, Color fgColor, Color bgColor);

    void drawHorizontalLine(const Point &p1, const Point &p2, char content, Color fgColor, Color bgColor);

    void drawVerticalLine(const Point &p1, const Point &p2, char content, Color fgColor, Color bgColor);

    void drawTextBox(const Point &topLeft, const Point &bottomRight, string str, Color fgColor, Color bgColor);

    void drawRectangle(const Point &topLeft, const Point &bottomRight, char borderCharacter, Color textColor,
                       Color bgColor, Color borderColor);

    friend ostream &operator<<(ostream &os, const FrameBuffer &fb);

    void clearScreen();

private:

    static const char BLANK;
    static const string CS_INITIATOR;
    static const string CS_TERMINATOR;
    static const string RESET;
    static const string FG_COLOR_CONSTANTS[];
    static const string BG_COLOR_CONSTANTS[];

    int idx(int r, int c) const {
        return r * cols + c;
    }

    int idx(const Point &p) const {
        return p.getR() * cols + p.getC();
    }

    int rows;
    int cols;
    bool colored;
    char *contents;
    Color *fgColors;
    Color *bgColors;
    string inputPrompt;
};

#endif //VIRTUALZOO_FRAMEBUFFER_H
