#include "Barracuda.h"

Barracuda::Barracuda(int _weight) : Pisces("Barracuda"), Carnivore(_weight) {
    description = "Barracuda is an animal found in tropical and subtropical oceans. It is snake-like in appearance with"
                  " fang-like teeth. This ovipar animal has water as its habitat.";
}

string Barracuda::interact() const {
    return "The barracuda is eating.";
}
