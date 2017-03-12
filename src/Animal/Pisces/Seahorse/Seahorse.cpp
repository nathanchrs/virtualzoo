#include "Seahorse.h"

Seahorse::Seahorse(int _weight) : Pisces("Seahorse"), Carnivore(_weight) {
    description = "<Seahorse description>"; //TODO description
}

string Seahorse::interact() const {
    return "<Seahorse interaction>"; // TODO interaction
}
