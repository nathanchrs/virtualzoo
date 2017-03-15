//Author : Alvin

#include "Owl.h"

Owl::Owl(const Point& pos, int weight, bool wild) : Aves("Owl"),
                                                     Carnivore(weight, 0.20) {
    description = "Owls possess large, forward-facing eyes and ear-holes, a"
                  " hawk-like beak, a flat face, and usually a "
                  " conspicuous circle of feathers, a facial disc, around each"
                  " eye. Owls can rotate their heads and necks as much as 270°."
                  "This ovipar animal has land and air as its habitat";
    air_animal = true;
    land_animal = true;
    water_animal = false;
    position = pos;
    this -> wild = wild;
}

string Owl::Interact() const {
    return "Owls rotate their heads and make 'kuk kuk' sound";
}