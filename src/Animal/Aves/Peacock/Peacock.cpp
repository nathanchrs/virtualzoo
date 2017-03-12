#include "Peacock.h"

Peacock::Peacock(int _weight) : Aves("Peacock"), Omnivore(_weight) {}

string Peacock::interact() const {
    return "<Interaksi dengan peacock>"; // TODO proper interaction
}