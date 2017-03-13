#include "Gorilla.h"

Gorilla::Gorilla(const Point& pos, int _weight, bool wild) : Mammals("Gorilla"), Omnivore(_weight, 0.25) {
    description = "Gorilla is an animal from Africa. It is the largest living primate and the closest living relatives"
                  " to humans. This vivipar animal has land as its habitat.";
    airAnimal = false;
    landAnimal = true;
    waterAnimal = false;
    position = pos;
    this -> wild = wild;
    //TODO ListPrey
}

string Gorilla::interact() const {
    return "The gorilla is playing with its toy";
}
