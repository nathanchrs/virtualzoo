#include <iostream>
#include "Renderer/ConsoleRenderer/BasicConsoleRenderer.h"
#include "Zoo/Animal/Aves/Eagle/Eagle.h"
using namespace std;

int main() {

    Zoo zoo(cin);

    BasicConsoleRenderer renderer;
    renderer.render(zoo);

    return 0;
}
