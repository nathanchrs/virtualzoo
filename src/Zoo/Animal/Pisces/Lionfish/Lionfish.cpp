#include "Lionfish.h"

Lionfish::Lionfish(const Point& pos, int _weight, bool wild) : Pisces("Lionfish"), Carnivore(_weight, 0.10) {
    description = "Lionfish is an animal native to the Indo-Pacific. It is characterized by conspicuous warning coloration"
                  " and venomous spiky fin rays. This ovipar animal has water as its habitat.";
    airAnimal = false;
    landAnimal = false;
    waterAnimal = true;
    position = pos;
    this -> wild = wild;
    //TODO ListPrey
}

string Lionfish::interact() const {
    return "Whoa! I thought it was plant. It is lionfish!";
}
