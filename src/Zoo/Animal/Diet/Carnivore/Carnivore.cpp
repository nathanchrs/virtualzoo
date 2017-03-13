#include "Carnivore.h"

Carnivore::Carnivore(int _weight, double _ratio) : Diet(_weight, _ratio) {}

int Carnivore::calculateTotalMeat() const {
    return weight*ratio;
}

int Carnivore::calculateTotalVegetable() const {
    return 0;
}