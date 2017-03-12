#include "Omnivore.h"

Omnivore::Omnivore(int _weight) : Diet(_weight) {}

int Omnivore::calculateTotalFood() const {
    return weight; // TODO multiply by food requirements
}
