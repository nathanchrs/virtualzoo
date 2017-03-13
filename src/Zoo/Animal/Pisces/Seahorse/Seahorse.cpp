#include "Seahorse.h"

Seahorse::Seahorse(const Point& pos, int _weight, bool wild) : Pisces("Seahorse"), Carnivore(_weight, 0.20) {
    description = "Seahorse is an animal found in shallow tropical and temperate waters throughout the world."
                  " It has head and neck suggestive of a horse and a curled prehensile tail."
                  " This ovipar animal has water as its habitat.";
    airAnimal = false;
    landAnimal = false;
    waterAnimal = true;
    position = pos;
    this -> wild = wild;
}

string Seahorse::interact() const {
    return "The seahorse is camouflaging, preparing to ambush its prey";
}
