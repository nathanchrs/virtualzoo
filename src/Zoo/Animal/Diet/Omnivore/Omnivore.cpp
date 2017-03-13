#include "Omnivore.h"

Omnivore::Omnivore(int _weight, double _ratio) : Diet(_weight, _ratio) {}

int Omnivore::calculateTotalMeat() const {
    return weight*ratio/2;
}

int Omnivore::calculateTotalVegetable() const {
    return weight*ratio/2;
}