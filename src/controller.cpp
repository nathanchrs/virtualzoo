//Author : Jordhy

#include <iostream>
#include "controller.h"
#include "renderer/console_renderer/basic_console_renderer.h"
#include "zoo/cell/road.h"
#include "array/array.h"
#include <ctime>
#include <cstring>

using namespace std;

void Controller::DisplayMenu() {
  bool exit_menu_loop = false;
  while (!exit_menu_loop) {
    BasicConsoleRenderer renderer;
    renderer.DisplayMenu(use_color);

    int input;
    do {
      cin >> input;
    } while (input < 1 || input > 4);
    switch (input) {
      case 1:
        DisplayZoo();
        break;
      case 2:
        TourZoo();
        break;
      case 3:
        DisplayFoodStatistics();
        break;
      case 4:
        exit_menu_loop = true;
    }
  }
}

void Controller::DisplayZoo() {
  BasicConsoleRenderer renderer;
  cout << "Input map limit (r1, c1, r2, c2 | from 0 to row/column count - 1): ";
  int r1, c1, r2, c2;
  cin >> r1 >> c1 >> r2 >> c2;
  renderer.Render(*zoo, Point(r1, c1), Point(r2, c2), use_color);
  string input;
  do {
    cin >> input;
  } while (input != "back");
}

void Controller::TourZoo() {
  Array<Cell *> entrances;
  Array<Cell *> arr = zoo->GetCells();
  int is_accessible[zoo->GetRows()][zoo->GetCols()];
  for (int i = 0; i < zoo->GetRows(); i++) {
    for (int j = 0; j < zoo->GetCols(); j++) {
      is_accessible[i][j] = 0;
    }
  }

  for (int i = 0; i < arr.Size(); i++) {
    if (arr[i]->IsAccessible()) {
      Road *path = dynamic_cast<Road *> (arr[i]);
      is_accessible[path->GetPosition().GetR()][path->GetPosition().GetC()] = 1;
      if (path->IsEntrance()) {
        entrances.PushBack(arr[i]->Clone());
      } else if (path->IsExit()) {
        is_accessible[path->GetPosition().GetR()][path->GetPosition()
            .GetC()] = 2;
      }
    }
  }

  srand((unsigned int) time(NULL));
  int n_entrance = rand() % entrances.Size();
  Point start = entrances[n_entrance]->GetPosition();
  bool path_exist;
  int c_direction;
  bool direction[4];
  do {
    path_exist = false;
    memset(direction, false, 4);
    cout << "Current Position : " << start.GetR() << " " << start.GetC()
         << endl;
    cout << (zoo->ListNeighboringInteractions(start));
    c_direction = rand() % 4;
    is_accessible[start.GetR()][start.GetC()] = 0;
    if (start.GetR() + 1 < zoo->GetRows() &&
        is_accessible[start.GetR() + 1][start.GetC()]) {
      direction[2] = true;
    }
    if (start.GetR() - 1 >= 0 &&
        is_accessible[start.GetR() - 1][start.GetC()]) {
      direction[0] = true;
    }
    if (start.GetC() - 1 >= 0 &&
        is_accessible[start.GetR()][start.GetC() - 1]) {
      direction[3] = true;
    }
    if (start.GetC() + 1 < zoo->GetCols() &&
        is_accessible[start.GetR()][start.GetC() + 1]) {
      direction[1] = true;
    }
    for (int i = 0; i < 4; i++) {
      path_exist |= direction[i];
    }
    if (path_exist) {
      do {
        c_direction = rand() % 4;
      } while (!direction[c_direction]);
      switch (c_direction) {
        case 0:
          start = start + Point(-1, 0);
          break;
        case 1:
          start = start + Point(0, 1);
          break;
        case 2:
          start = start + Point(1, 0);
          break;
        case 3:
          start = start + Point(0, -1);
          break;
      }
    }
  } while (path_exist && is_accessible[start.GetR()][start.GetC()] != 2);

  cout << "Input [back] to return to menu: ";
  string input;
  do {
    cin >> input;
  } while (input != "back");
}

void Controller::DisplayFoodStatistics() {
  cout << "Total meat needed: " << zoo->CalculateTotalMeat() << endl;
  cout << "Total vegetable needed: " << zoo->CalculateTotalVegetable() << endl;
  cout << "Input [back] to return to menu: ";

  string input;
  do {
    cin >> input;
  } while (input != "back");
}
