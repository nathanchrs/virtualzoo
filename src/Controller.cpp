#include <iostream>
#include "Controller.h"
#include "Renderer/ConsoleRenderer/BasicConsoleRenderer.h"
using namespace std;

void Controller::displayMenu(const Zoo &zoo, bool useColor) {
    bool exitMenuLoop = false;
    while (!exitMenuLoop) {
        BasicConsoleRenderer renderer;
        renderer.displayMenu(useColor);

        int input;
        do {
            cin >> input;
        } while (input < 1 || input > 4);
        switch (input) {
            case 1:
                displayZoo(zoo, useColor);
                break;
            case 2:
                tourZoo(zoo, useColor);
                break;
            case 3:
                displayFoodStatistics(zoo, useColor);
                break;
            case 4:
                exitMenuLoop = true;
        }
    }
}

void Controller::displayZoo(const Zoo &zoo, bool useColor) {
    BasicConsoleRenderer renderer;
    renderer.render(zoo, useColor);
    string input;
    do {
        cin >> input;
    } while (input != "back");
}

void Controller::tourZoo(const Zoo &zoo, bool useColor) {

    string input;
    do {
        cin >> input;
    } while (input != "back");
}

void Controller::displayFoodStatistics(const Zoo &zoo, bool useColor) {

    string input;
    do {
        cin >> input;
    } while (input != "back");
}
