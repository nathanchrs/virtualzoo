#include "Owl.h"

Owl::Owl(int _weight) : Aves("Owl"), Carnivore(_weight) {}

string Owl::interact() const {
    return "<Interaksi dengan owl>"; // TODO proper interaction
}