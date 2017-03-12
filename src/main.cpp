#include <iostream>
#include "Renderer/ConsoleRenderer/FrameBuffer.h"

using namespace std;

int main() {

    FrameBuffer fb(10, 100, true);
    fb.drawTextBox(Point(3,5), Point(5, 12), "Hello, world! in a box", FrameBuffer::WHITE, FrameBuffer::RED);
    cout << fb;

    return 0;
}
