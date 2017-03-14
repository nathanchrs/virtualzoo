#include "Carnivore.h"

Carnivore::Carnivore(int weight, double ratio) : Diet(weight, ratio) {}

double Carnivore::CalculateTotalMeat() const {
  return weight * ratio;
}

double Carnivore::CalculateTotalVegetable() const {
  return 0;
}