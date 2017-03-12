#include "Herbivore.h"

Herbivore::Herbivore(int _weight, double _ratio) : Diet(_weight, _ratio) {}

int Herbivore::calculateTotalMeat() const {
    return 0;
}

int Herbivore::calculateTotalVegetable() const {
    return weight*ratio;
}