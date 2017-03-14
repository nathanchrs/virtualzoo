#include "Omnivore.h"

Omnivore::Omnivore(int weight, double ratio) : Diet(weight, ratio) {}

double Omnivore::CalculateTotalMeat() const {
  return weight * ratio / 2.0;
}

double Omnivore::CalculateTotalVegetable() const {
  return weight * ratio / 2.0;
}