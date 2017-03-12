#include "FrenchAngelFish.h"

FrenchAngelFish::FrenchAngelFish(int _weight) : Pisces("FrenchAngelFish"), Herbivore(_weight) {
    description = "French angelfish is an animal found in western Atlantic, the Bahamas, and the Gulf of Mexico."
                  " It is colored with black but the scales of the body are rimmed with golden yellow."
                  " This ovipar animal has water as its habitat.";
}

string FrenchAngelFish::interact() const {
    return "Splash! It is swimming."; // TODO interaction
}
