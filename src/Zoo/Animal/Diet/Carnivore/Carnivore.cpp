#include "Carnivore.h"

Carnivore::Carnivore(int _weight, double _ratio) : Diet(_weight, _ratio) {}

double Carnivore::calculateTotalMeat() const {
    return weight*ratio;
}

double Carnivore::calculateTotalVegetable() const {
    return 0;
}