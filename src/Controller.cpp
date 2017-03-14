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
  renderer.Render(*zoo);
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
  string input;
  do {
    cin >> input;
  } while (input != "back");
}
