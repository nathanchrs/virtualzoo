#include "Barracuda.h"

Barracuda::Barracuda(int _weight) : Pisces("Barracuda"), Carnivore(_weight) {
    description = "<Barracuda description>"; //TODO description
}

string Barracuda::interact() const {
    return "<Barracuda interaction>"; // TODO interaction
}
