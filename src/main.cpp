
#include "Renderer/ConsoleRenderer/BasicConsoleRenderer.h"
#include "Zoo/Cell/Habitat.h"

int main() {

    Zoo zoo(20, 20);

    zoo.addZone(Cage("Kandang ayam"));
    zoo.addCell(Habitat(Point(1, 2), Habitat::LandHabitat), "Kandang ayam");
    zoo.addCell(Habitat(Point(1, 3), Habitat::LandHabitat), "Kandang ayam");
    zoo.addCell(Habitat(Point(2, 2), Habitat::LandHabitat), "Kandang ayam");


    BasicConsoleRenderer renderer;
    renderer.render(zoo);

    return 0;
}
