//Author : Alvin

#include "herbivore.h"

Herbivore::Herbivore(int weight, double ratio) : Diet(weight, ratio) {}

double Herbivore::CalculateTotalMeat() const {
  return 0;
}

double Herbivore::CalculateTotalVegetable() const {
  return weight * ratio;
}