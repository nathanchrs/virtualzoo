#include "Barracuda.h"

Barracuda::Barracuda(const Point& pos, int _weight, bool wild) : Pisces("Barracuda"), Carnivore(_weight, 0.15) {
    description = "Barracuda is an animal found in tropical and subtropical oceans. It is snake-like in appearance with"
                  " fang-like teeth. This ovipar animal has water as its habitat.";
    airAnimal = false;
    landAnimal = false;
    waterAnimal = true;
    position = pos;
    this -> wild = wild;
    AddPrey("FrenchAngelFish");
    AddPrey("Lionfish");
    AddPrey("Ray");
    AddPrey("Seahorse");
}

string Barracuda::interact() const {
    return "The barracuda is eating";
}
