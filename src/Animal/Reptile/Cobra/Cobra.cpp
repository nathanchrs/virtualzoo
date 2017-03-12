#include "Cobra.h"

Cobra::Cobra(int _weight) : Reptile("Cobra"), Carnivore(_weight) {
    description = "<Cobra description>"; //TODO description
}

string Cobra::interact() const {
    return "<Cobra interaction>"; // TODO interaction
}
