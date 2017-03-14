#include <iostream>
#include <fstream>
#include "Renderer/ConsoleRenderer/BasicConsoleRenderer.h"
#include "Zoo/Animal/Aves/Eagle/Eagle.h"
using namespace std;

int main(int argc, char **argv) {

    bool useColor = false;
    for (int i = 1; i < argc; i++) {
        string arg = string(argv[i]);
        if (arg == "--color" || arg == "--colour") {
            useColor = true;
        }
    }

    ifstream fin;
    fin.open("zoo.in");
    Zoo zoo(fin);
    fin.close();

    BasicConsoleRenderer renderer;
    renderer.render(zoo, useColor);

    return 0;
}
