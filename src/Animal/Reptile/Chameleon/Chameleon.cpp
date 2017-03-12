#include "Chameleon.h"

Chameleon::Chameleon(int _weight) : Reptile("Chameleon"), Carnivore(_weight) {
    description = "<Chameleon description>"; //TODO description
}

string Chameleon::interact() const {
    return "<Chameleon interaction>"; // TODO interaction
}
