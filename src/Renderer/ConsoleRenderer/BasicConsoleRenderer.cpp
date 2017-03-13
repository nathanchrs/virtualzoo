#include "BasicConsoleRenderer.h"
#include "FrameBuffer.h"
#include <iostream>
using namespace std;

void BasicConsoleRenderer::render(const Zoo &zoo) {
    const Point gridOffset = Point(2, 3);
    Array<Cell*> cells = zoo.getCells();
    FrameBuffer fb(zoo.getRows() + 12, zoo.getCols() + gridOffset.getC() * 2, false);

    for (int r = 0; r < zoo.getRows(); r++) {
        for (int c = 0; c < zoo.getCols(); c++) {
            fb.drawPoint(Point(r + gridOffset.getR(), c + gridOffset.getC()), cells[r * zoo.getRows() + c]->render(),
            FrameBuffer::WHITE, FrameBuffer::BLACK);
        }
    }



    fb.clearScreen();
    cout << fb;
}
