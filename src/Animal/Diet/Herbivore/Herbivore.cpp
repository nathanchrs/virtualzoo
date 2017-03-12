#include "Herbivore.h"

Herbivore::Herbivore(int _weight) : Diet(_weight) {}

int Herbivore::calculateTotalFood() const {
    return weight; // TODO multiply by food requirements
}