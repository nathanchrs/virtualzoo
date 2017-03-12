#include "Lionfish.h"

Lionfish::Lionfish(int _weight) : Pisces("Lionfish"), Carnivore(_weight) {
    description = "<Lionfish description>"; //TODO description
}

string Lionfish::interact() const {
    return "<Lionfish interaction>"; // TODO interaction
}
