#include "Barracuda.h"

Barracuda::Barracuda(int _weight) : Pisces("Barracuda"), Carnivore(_weight, 0.15) {
    description = "Barracuda is an animal found in tropical and subtropical oceans. It is snake-like in appearance with"
                  " fang-like teeth. This ovipar animal has water as its habitat.";
    airAnimal = false;
    landAnimal = false;
    waterAnimal = true;
}

string Barracuda::interact() const {
    return "The barracuda is eating.";
}
