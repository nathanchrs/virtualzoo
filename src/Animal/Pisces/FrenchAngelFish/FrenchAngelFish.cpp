#include "FrenchAngelFish.h"

FrenchAngelFish::FrenchAngelFish(int _weight) : Pisces("FrenchAngelFish"), Herbivore(_weight) {
    description = "<FrenchAngelFish description>"; //TODO description
}

string FrenchAngelFish::interact() const {
    return "<FrenchAngelFish interaction>"; // TODO interaction
}
