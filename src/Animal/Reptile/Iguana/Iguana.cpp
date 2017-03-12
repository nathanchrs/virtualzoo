#include "Iguana.h"

Iguana::Iguana(int _weight) : Reptile("Iguana"), Carnivore(_weight) {
    description = "<Iguana description>"; //TODO description
}

string Iguana::interact() const {
    return "<Iguana interaction>"; // TODO interaction
}
