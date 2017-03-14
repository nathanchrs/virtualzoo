#include <iostream>
#include <fstream>
#include "Zoo/Zoo.h"
#include "Controller.h"

using namespace std;

int main(int argc, char **argv) {

    // Process command-line arguments
    bool useColor = false;
    for (int i = 1; i < argc; i++) {
        string arg = string(argv[i]);
        if (arg == "--color" || arg == "--colour") {
            useColor = true;
        }
    }

    // Read zoo from input file
    ifstream fin;
    fin.open("zoo.in");
    Zoo zoo(fin);
    fin.close();

    Controller::displayZoo(zoo, useColor);

    return 0;
}
