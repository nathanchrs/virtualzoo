#include "Peacock.h"

Peacock::Peacock(const Point& pos, int _weight, bool wild) : Aves("Peacock"), Omnivore(_weight, 0.15) {
    description = "The Peacock is found in many locations including Burma, Indian, and Sri Lanka."
                  "The main body of the Peacock is bluish green in color. Peacock has colorful tail. The colorful tail "
                  "of the Peacock is fanned out to be able to show dominance and for the purpose of attracting a mate."
                  "This ovipar animal has land as its habitat";
    airAnimal = false;
    landAnimal = true;
    waterAnimal = false;
    position = pos;
    this -> wild = wild;
    //TODO ListPrey
}

string Peacock::interact() const {
    return "The peacock is spreading its tail";
}