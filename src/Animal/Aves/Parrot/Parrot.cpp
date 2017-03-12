#include "Parrot.h"

Parrot::Parrot(int _weight) : Aves("Parrot"), Herbivore(_weight) {}

string Parrot::interact() const {
    return "<Interaksi dengan parrot>"; // TODO proper interaction
}