#include "Parrot.h"

Parrot::Parrot(const Point& pos, int _weight, bool wild) : Aves("Parrot"), Herbivore(_weight, 0.05) {
    description = "Parrot is an animal that can be found in South America and Australasia."
                  "Parrots are intelligent birds. They have relatively large brains, they can learn, and they can use"
                  " simple tools. This ovipar animal has land and air as its habitat";
    airAnimal = true;
    landAnimal = true;
    waterAnimal = false;
    position = pos;
    this -> wild = wild;
    //TODO ListPrey
}

string Parrot::interact() const {
    return "Parrot is imitate someone voice that said 'I'm handsome!'";
}