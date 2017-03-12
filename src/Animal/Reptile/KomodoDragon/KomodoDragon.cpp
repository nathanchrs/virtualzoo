#include "KomodoDragon.h"

KomodoDragon::KomodoDragon(int _weight) : Reptile("KomodoDragon"), Carnivore(_weight) {
    description = "<KomodoDragon description>"; //TODO description
}

string KomodoDragon::interact() const {
    return "<KomodoDragon interaction>"; // TODO interaction
}
