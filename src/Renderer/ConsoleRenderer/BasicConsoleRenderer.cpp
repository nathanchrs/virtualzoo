#include "BasicConsoleRenderer.h"
#include "FrameBuffer.h"
#include <iostream>
using namespace std;

void BasicConsoleRenderer::Render(const Zoo &zoo) {
	const Point gridOffset = Point(2, 3);
	Array<Cell*> cells = zoo.getCells();
	Array<Zone*> zones = zoo.getZones();
	FrameBuffer fb(zoo.getRows() + 12, zoo.getCols() + gridOffset.GetC() * 2, false);
	for (int r = 0; r < zoo.getRows(); r++) {
		for (int c = 0; c < zoo.getCols(); c++) {
      fb.DrawPoint(Point(r, c) + gridOffset, cells[r * zoo.getCols() + c]->render(),
                   FrameBuffer::WHITE, FrameBuffer::BLACK);
    }
  }
  for (int i = 0; i < zones.Size(); i++) {
    Cage *cage = dynamic_cast<Cage*> (zones[i]);
    if (cage != nullptr) {
      Array<Animal*> animals = cage->getAnimals();
      for (int j = 0; j < animals.Size(); j++) {
        fb.DrawPoint(animals[j]->getPosition() + gridOffset, animals[j]->render(),
                     FrameBuffer::YELLOW, FrameBuffer::BLACK);
      }
    }
  }
  fb.ClearScreen();
  cout << fb;
}
