#include <iostream>
#include "Controller.h"
#include "Renderer/ConsoleRenderer/BasicConsoleRenderer.h"
using namespace std;

void Controller::displayMenu(bool useColor) {
    BasicConsoleRenderer renderer;
    renderer.displayMenu(useColor);
}

void Controller::displayZoo(const Zoo &zoo, bool useColor) {
    BasicConsoleRenderer renderer;
    renderer.render(zoo, useColor);
    string input;
    do {
        cin >> input;
    } while (input != "back");
}

void Controller::tourZoo(const Zoo &zoo) {

    string input;
    do {
        cin >> input;
    } while (input != "back");
}

void Controller::displayFoodStatistics(const Zoo &zoo) {

    string input;
    do {
        cin >> input;
    } while (input != "back");
}
