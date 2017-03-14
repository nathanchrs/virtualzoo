#include "FrenchAngelFish.h"

FrenchAngelFish::FrenchAngelFish(const Point &pos, int weight, bool wild)
    : Pisces("FrenchAngelFish"), Herbivore(weight, 0.05) {

  description = "French angelfish is an animal found in western Atlantic,"
                " the Bahamas, and the Gulf of Mexico. It is colored with black"
                " but the scales of the body are rimmed with golden yellow."
                " This ovipar animal has water as its habitat.";
  air_animal = false;
  land_animal = false;
  water_animal = true;
  position = pos;
  this->wild = wild;
}

string FrenchAngelFish::Interact() const {
  return "Splash! It is swimming";
}
