#include "BasicConsoleRenderer.h"
#include "FrameBuffer.h"
#include <iostream>
using namespace std;

void BasicConsoleRenderer::render(const Zoo &zoo) {
    const Point gridOffset = Point(2, 3);
    Array<Cell*> cells = zoo.getCells();
    Array<Zone*> zones = zoo.getZones();
    FrameBuffer fb(zoo.getRows() + 12, zoo.getCols() + gridOffset.getC() * 2, false);

    for (int r = 0; r < zoo.getRows(); r++) {
        for (int c = 0; c < zoo.getCols(); c++) {
            fb.drawPoint(Point(r, c) + gridOffset, cells[r * zoo.getRows() + c]->render(),
            FrameBuffer::WHITE, FrameBuffer::BLACK);
        }
    }

    for (int i = 0; i < zones.size(); i++) {
        Cage *cage = dynamic_cast<Cage*> (zones[i]);
        if (cage != nullptr) {
            Array<Animal*> animals = cage->getAnimals();
            for (int j = 0; j < animals.size(); j++) {
                fb.drawPoint(animals[j]->getPosition() + gridOffset, animals[j]->render(),
                             FrameBuffer::YELLOW, FrameBuffer::BLACK);
            }
        }
    }

    fb.clearScreen();
    cout << fb;
}
