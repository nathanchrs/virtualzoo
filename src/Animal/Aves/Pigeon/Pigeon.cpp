#include "Pigeon.h"

Pigeon::Pigeon(int _weight) : Aves("Pigeon"), Herbivore(_weight) {}

string Pigeon::interact() const {
    return "<Interaksi dengan pigeon>"; // TODO proper interaction
}