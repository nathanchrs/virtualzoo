#include "Herbivore.h"

Herbivore::Herbivore(int _weight, double _ratio) : Diet(_weight, _ratio) {}

double Herbivore::calculateTotalMeat() const {
    return 0;
}

double Herbivore::calculateTotalVegetable() const {
    return weight*ratio;
}