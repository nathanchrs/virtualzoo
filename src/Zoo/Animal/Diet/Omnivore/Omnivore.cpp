#include "Omnivore.h"

Omnivore::Omnivore(int _weight, double _ratio) : Diet(_weight, _ratio) {}

double Omnivore::calculateTotalMeat() const {
    return weight*ratio/2.0;
}

double Omnivore::calculateTotalVegetable() const {
    return weight*ratio/2.0;
}