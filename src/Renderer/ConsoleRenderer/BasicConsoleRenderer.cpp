#include "BasicConsoleRenderer.h"
#include "FrameBuffer.h"
#include <iostream>
using namespace std;

void BasicConsoleRenderer::render(const Zoo &zoo, bool useColor) {
    const Point gridOffset = Point(3, 3);
    Array<Cell*> cells = zoo.getCells();
    Array<Zone*> zones = zoo.getZones();
    FrameBuffer fb(zoo.getRows() + 5, zoo.getCols() + gridOffset.getC() * 2 + 24, useColor);
    fb.clear();

    // Draw title
    fb.drawTextBox(Point(1, 3), Point(1, 19), ":: Virtual Zoo ::", FrameBuffer::BLACK, FrameBuffer::WHITE);

    // Draw legend
    Point legendOffset = Point(0, zoo.getCols() + 3) + gridOffset;
    fb.drawRectangle(legendOffset, Point(8, 20) + legendOffset,
                     '*', FrameBuffer::WHITE, FrameBuffer::BLACK, FrameBuffer::BLACK);
    fb.drawTextBox(legendOffset + Point(0, 2), legendOffset + Point(0, 7), "Legend",
                   FrameBuffer::BLACK, FrameBuffer::WHITE);

    fb.drawTextBox(legendOffset + Point(1, 2), legendOffset + Point(1, 18), ". Road",
                   FrameBuffer::GRAY, FrameBuffer::TRANSPARENT);
    fb.drawTextBox(legendOffset + Point(2, 2), legendOffset + Point(2, 18), "A Air Habitat",
                   FrameBuffer::GRAY, FrameBuffer::TRANSPARENT);
    fb.drawTextBox(legendOffset + Point(3, 2), legendOffset + Point(3, 18), "L Land Habitat",
                   FrameBuffer::GRAY, FrameBuffer::TRANSPARENT);
    fb.drawTextBox(legendOffset + Point(4, 2), legendOffset + Point(4, 18), "W Water Habitat",
                   FrameBuffer::GRAY, FrameBuffer::TRANSPARENT);
    fb.drawTextBox(legendOffset + Point(5, 2), legendOffset + Point(5, 18), "r Restaurant",
                   FrameBuffer::GRAY, FrameBuffer::TRANSPARENT);
    fb.drawTextBox(legendOffset + Point(6, 2), legendOffset + Point(6, 18), "p Park",
                   FrameBuffer::GRAY, FrameBuffer::TRANSPARENT);
    fb.drawTextBox(legendOffset + Point(7, 2), legendOffset + Point(7, 18), "x Animal",
                   FrameBuffer::GRAY, FrameBuffer::TRANSPARENT);

    // Draw all cells
    for (int r = 0; r < zoo.getRows(); r++) {
        for (int c = 0; c < zoo.getCols(); c++) {
            fb.drawPoint(Point(r, c) + gridOffset, cells[r * zoo.getCols() + c]->render(),
            FrameBuffer::WHITE, FrameBuffer::TRANSPARENT);
        }
    }

    for (int i = 0; i < zones.size(); i++) {
        Cage *cage = dynamic_cast<Cage*> (zones[i]);
        if (cage != nullptr) {
            // Redraw cells that are inside a cage
            Array<Cell*> cageCells = zones[i]->getCells();
            for (int j = 0; j < cageCells.size(); j++) {
                Point cageCellsPos = cageCells[j]->getPosition();
                fb.drawPoint(cageCellsPos + gridOffset, (char) toupper(cageCells[j]->render()),
                             FrameBuffer::WHITE, FrameBuffer::BLACK);
            }

            // Draw animals
            Array<Animal*> animals = cage->getAnimals();
            for (int j = 0; j < animals.size(); j++) {
                fb.drawPoint(animals[j]->getPosition() + gridOffset, animals[j]->render(),
                             FrameBuffer::YELLOW, FrameBuffer::BLACK);
            }
        }
    }

    fb.setInputPrompt("Input [back] to return to menu: ");
    fb.clearScreen();
    cout << fb;
}
