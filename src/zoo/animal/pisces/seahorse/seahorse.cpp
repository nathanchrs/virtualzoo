//Author : Alvin

#include "seahorse.h"

Seahorse::Seahorse(const Point &pos, int weight, bool wild) : Pisces(
    "Seahorse"), Carnivore(weight, 0.20) {
  description = "Seahorse is an animal found in shallow tropical and temperate"
                " waters throughout the world. It has head and neck suggestive"
                " of a horse and a curled prehensile tail. This ovipar animal"
                " has water as its habitat.";
  air_animal = false;
  land_animal = false;
  water_animal = true;
  position = pos;
  this->wild = wild;
}

string Seahorse::Interact() const {
  return "The seahorse is camouflaging, preparing to ambush its prey";
}
