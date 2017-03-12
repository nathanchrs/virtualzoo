#include "Eagle.h"

Eagle::Eagle(int _weight) : Aves("Eagle"), Carnivore(_weight) {}

string Eagle::interact() const {
    return "<Interaksi dengan eagle>"; // TODO proper interaction
}

