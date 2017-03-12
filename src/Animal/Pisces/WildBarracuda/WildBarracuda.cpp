//
// Created by alvin on 12/03/17.
//

#include "WildBarracuda.h"

WildBarracuda::WildBarracuda(int _weight) : Pisces("WildBarracuda"), Carnivore(_weight, 0.30), WildAnimal(2) {
    description = "Barracuda is an animal found in tropical and subtropical oceans. It is snake-like in appearance with"
            " fang-like teeth. This ovipar animal has water as its habitat.";
    airAnimal = false;
    landAnimal = false;
    waterAnimal = true;
    AddPrey("FrenchAngelFish");
    AddPrey("Lionfish");
}

string WildBarracuda::interact() const {
    return "WHOOSH!";
}
