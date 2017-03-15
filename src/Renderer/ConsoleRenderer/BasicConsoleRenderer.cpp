//Author : Jordhy

#include "BasicConsoleRenderer.h"
#include "FrameBuffer.h"
#include <iostream>

using namespace std;

inline int GetMax(int a, int b) {
  return a > b ? a : b;
}

inline int GetMin(int a, int b) {
  return a < b ? a : b;
}

void
BasicConsoleRenderer::Render(const Zoo &zoo, Point top_left, Point bottom_right,
                             bool use_color) {

  top_left = Point(GetMax(top_left.GetR(), 0), GetMax(top_left.GetC(), 0));
  bottom_right = Point(GetMin(bottom_right.GetR(), zoo.GetRows() - 1),
                       GetMin(bottom_right.GetC(), zoo.GetCols() - 1g));

  const Point grid_offset = Point(3, 3);
  const int rows = bottom_right.GetR() - top_left.GetR() + 1;
  const int cols = bottom_right.GetC() - top_left.GetC() + 1;

  Array<Cell *> cells = zoo.GetCells();
  Array<Zone *> zones = zoo.GetZones();
  FrameBuffer fb(rows + 5, cols + grid_offset.GetC() * 2 + 24, use_color);
  fb.Clear();

  // Draw title
  fb.DrawTextBox(Point(1, 3), Point(1, 19), ":: Virtual Zoo ::",
                 FrameBuffer::BLACK, FrameBuffer::WHITE);

  // Draw legend
  Point legend_offset = Point(0, cols + 3) + grid_offset;
  fb.DrawRectangle(legend_offset, Point(8, 20) + legend_offset, '*',
                   FrameBuffer::WHITE, FrameBuffer::BLACK,
                   FrameBuffer::BLACK);
  fb.DrawTextBox(legend_offset + Point(0, 2), legend_offset + Point(0, 7),
                 "Legend", FrameBuffer::BLACK, FrameBuffer::WHITE);

  fb.DrawTextBox(legend_offset + Point(1, 2), legend_offset + Point(1, 18),
                 ". Road", FrameBuffer::GRAY, FrameBuffer::TRANSPARENT);
  fb.DrawTextBox(legend_offset + Point(2, 2), legend_offset + Point(2, 18),
                 "A Air Habitat", FrameBuffer::GRAY, FrameBuffer::TRANSPARENT);
  fb.DrawTextBox(legend_offset + Point(3, 2), legend_offset + Point(3, 18),
                 "L Land Habitat", FrameBuffer::GRAY, FrameBuffer::TRANSPARENT);
  fb.DrawTextBox(legend_offset + Point(4, 2), legend_offset + Point(4, 18),
                 "W Water Habitat", FrameBuffer::GRAY,
                 FrameBuffer::TRANSPARENT);
  fb.DrawTextBox(legend_offset + Point(5, 2), legend_offset + Point(5, 18),
                 "r Restaurant", FrameBuffer::GRAY, FrameBuffer::TRANSPARENT);
  fb.DrawTextBox(legend_offset + Point(6, 2), legend_offset + Point(6, 18),
                 "p Park", FrameBuffer::GRAY, FrameBuffer::TRANSPARENT);
  fb.DrawTextBox(legend_offset + Point(7, 2), legend_offset + Point(7, 18),
                 "x Animal", FrameBuffer::GRAY, FrameBuffer::TRANSPARENT);

  // Draw all cells
  for (int r = 0; r < rows; r++) {
    for (int c = 0; c < cols; c++) {
      Point draw_cell = Point(r, c) + top_left;
      fb.DrawPoint(Point(r, c) + grid_offset,
                   cells[draw_cell.GetR() * zoo.GetCols() +
                         draw_cell.GetC()]->Render(),
                   FrameBuffer::WHITE, FrameBuffer::TRANSPARENT);
    }
  }

  for (int i = 0; i < zones.Size(); i++) {
    Cage *cage = dynamic_cast<Cage *> (zones[i]);
    if (cage != nullptr) {
      // Redraw cells that are inside a cage
      Array<Cell *> cage_cells = zones[i]->GetCells();
      for (int j = 0; j < cage_cells.Size(); j++) {
        Point cage_cells_pos = cage_cells[j]->GetPosition();
        if (cage_cells_pos.GetR() >= top_left.GetR()
            && cage_cells_pos.GetC() >= top_left.GetC()
            && cage_cells_pos.GetR() <= bottom_right.GetR()
            && cage_cells_pos.GetC() <= bottom_right.GetC()) {
          fb.DrawPoint(cage_cells_pos - top_left + grid_offset,
                       (char) toupper(cage_cells[j]->Render()),
                       FrameBuffer::WHITE,
                       FrameBuffer::BLACK);
        }
      }

      // Draw animals
      Array<Animal *> animals = cage->GetAnimals();
      for (int j = 0; j < animals.Size(); j++) {
        Point animal_pos = animals[j]->GetPosition();
        if (animal_pos.GetR() >= top_left.GetR()
            && animal_pos.GetC() >= top_left.GetC()
            && animal_pos.GetR() <= bottom_right.GetR()
            && animal_pos.GetC() <= bottom_right.GetC()) {
          fb.DrawPoint(animal_pos - top_left + grid_offset,
                       animals[j]->Render(), FrameBuffer::YELLOW,
                       FrameBuffer::BLACK);
        }
      }
    }
  }

  fb.SetInputPrompt("Input [back] to return to menu: ");
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

  fb.DrawTextBox(Point(3, 3), Point(8, 66), title_text, FrameBuffer::RED,
                 FrameBuffer::TRANSPARENT);
  fb.DrawTextBox(Point(11, 3), Point(14, 66), menu_text,
                 FrameBuffer::LIGHT_GRAY, FrameBuffer::TRANSPARENT);

  fb.SetInputPrompt("Select menu option [1|2|3|4]: ");
  fb.ClearScreen();
  cout << fb;
}
