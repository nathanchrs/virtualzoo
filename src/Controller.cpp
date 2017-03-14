#include <iostream>
#include "Controller.h"
#include "Renderer/ConsoleRenderer/BasicConsoleRenderer.h"
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
