#include "BasicConsoleRenderer.h"
#include "FrameBuffer.h"
#include <iostream>
using namespace std;

void BasicConsoleRenderer::Render(const Zoo &zoo, bool use_color) {
  const Point grid_offset = Point(3, 3);
  Array<Cell*> cells = zoo.getCells();
  Array<Zone*> zones = zoo.getZones();
  FrameBuffer fb(zoo.getRows()+5, zoo.getCols() + grid_offset.getC()*2 + 24,
                 use_color);
  fb.Clear();

  // Draw title
  fb.drawTextBox(Point(1, 3), Point(1, 19), ":: Virtual Zoo ::",
                 FrameBuffer::BLACK, FrameBuffer::WHITE);

  // Draw legend
  Point legend_offset = Point(0, zoo.getCols() + 3) + grid_offset;
  fb.drawRectangle(legend_offset, Point(8, 20) + legend_offset, '*',
                   FrameBuffer::WHITE, FrameBuffer::BLACK,
                   FrameBuffer::BLACK);
  fb.drawTextBox(legend_offset + Point(0, 2), legend_offset + Point(0, 7),
                 "Legend", FrameBuffer::BLACK, FrameBuffer::WHITE);

  fb.drawTextBox(legend_offset + Point(1, 2), legend_offset + Point(1, 18),
                 ". Road", FrameBuffer::GRAY, FrameBuffer::TRANSPARENT);
  fb.drawTextBox(legend_offset + Point(2, 2), legend_offset + Point(2, 18),
                 "A Air Habitat", FrameBuffer::GRAY, FrameBuffer::TRANSPARENT);
  fb.drawTextBox(legend_offset + Point(3, 2), legend_offset + Point(3, 18),
                 "L Land Habitat", FrameBuffer::GRAY, FrameBuffer::TRANSPARENT);
  fb.drawTextBox(legend_offset + Point(4, 2), legend_offset + Point(4, 18),
                 "W Water Habitat", FrameBuffer::GRAY,
                 FrameBuffer::TRANSPARENT);
  fb.drawTextBox(legend_offset + Point(5, 2), legend_offset + Point(5, 18),
                 "r Restaurant", FrameBuffer::GRAY, FrameBuffer::TRANSPARENT);
  fb.drawTextBox(legend_offset + Point(6, 2), legend_offset + Point(6, 18),
                 "p Park", FrameBuffer::GRAY, FrameBuffer::TRANSPARENT);
  fb.drawTextBox(legend_offset + Point(7, 2), legend_offset + Point(7, 18),
                 "x Animal", FrameBuffer::GRAY, FrameBuffer::TRANSPARENT);

  // Draw all cells
  for (int r = 0; r < zoo.getRows(); r++) {
    for (int c = 0; c < zoo.getCols(); c++) {
      fb.drawPoint(Point(r, c)+grid_offset, cells[r*zoo.getCols() + c]->Render(),
                   FrameBuffer::WHITE, FrameBuffer::TRANSPARENT);
    }
  }

  for (int i = 0; i < zones.Size(); i++) {
    Cage *cage = dynamic_cast<Cage*> (zones[i]);
    if (cage != nullptr) {
      // Redraw cells that are inside a cage
      Array<Cell*> cageCells = zones[i]->getCells();
      for (int j = 0; j < cageCells.Size(); j++) {
        Point cageCellsPos = cageCells[j]->GetPosition();
        fb.drawPoint(cageCellsPos + grid_offset,
                     (char) toupper(cageCells[j]->Render()), FrameBuffer::WHITE,
                     FrameBuffer::BLACK);
      }

      // Draw animals
      Array<Animal*> animals = cage->getAnimals();
      for (int j = 0; j < animals.Size(); j++) {
        fb.drawPoint(animals[j]->GetPosition() + grid_offset,
                     animals[j]->Render(), FrameBuffer::YELLOW,
                     FrameBuffer::BLACK);
      }
    }
  }

  fb.setInputPrompt("Input [back] to return to menu: ");
  fb.ClearScreen();
  cout << fb;
}

void BasicConsoleRenderer::DisplayMenu(bool use_color) {
  FrameBuffer fb(20, 72, use_color);
  fb.Clear();

  const string title_text =
      "__      __ _        _                  _   ______             \n"
      "\\ \\    / /(_)      | |                | | |___  /             \n"
      " \\ \\  / /  _  _ __ | |_  _   _   __ _ | |    / /  ___    ___  \n"
      "  \\ \\/ /  | || '__|| __|| | | | / _` || |   / /  / _ \\  / _ \\ \n"
      "   \\  /   | || |   | |_ | |_| || (_| || |  / /__| (_) || (_) |\n"
      "    \\/    |_||_|    \\__| \\__,_| \\__,_||_| /_____|\\___/  \\___/ \n";

  const string menu_text =
      "    1. Display zoo\n"
      "    2. Tour zoo\n"
      "    3. Display food statistics\n"
      "    4. Exit\n";

  fb.drawTextBox(Point(3, 3), Point(8, 66), title_text, FrameBuffer::RED,
                 FrameBuffer::TRANSPARENT);
  fb.drawTextBox(Point(11, 3), Point(14, 66), menu_text,
                 FrameBuffer::LIGHT_GRAY, FrameBuffer::TRANSPARENT);

  fb.setInputPrompt("Select menu option [1|2|3|4]: ");
  fb.ClearScreen();
  cout << fb;
}
