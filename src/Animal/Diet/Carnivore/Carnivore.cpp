#include "Carnivore.h"

Carnivore::Carnivore(int _weight) : Diet(_weight) {}

int Carnivore::calculateTotalFood() const {
    return weight; // TODO multiply by food requirements
}