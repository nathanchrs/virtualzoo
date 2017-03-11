#include "Animal.h"

void Animal::Move(int x, int y) {
    position.SetAbsis(x);
    position.SetOrdinat(y);
}

bool Animal::IsWild() {
    return wild;
}

bool Animal::IsLandAnimal() {
    return landAnimal;
}

bool Animal::IsWaterAnimal() {
    return waterAnimal;
}

bool Animal::IsAirAnimal() {
    return airAnimal;
}