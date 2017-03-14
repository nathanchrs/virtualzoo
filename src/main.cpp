#include <iostream>
#include <fstream>
#include "Renderer/ConsoleRenderer/BasicConsoleRenderer.h"
#include "Zoo/Animal/Aves/Eagle/Eagle.h"
using namespace std;

int main() {

    ifstream fin;
    fin.open("zoo.in");
    Zoo zoo(fin);
    fin.close();

    BasicConsoleRenderer renderer;
  renderer.Render(zoo);

    return 0;
}
