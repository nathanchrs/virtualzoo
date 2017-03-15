//Author : Alvin

#include "Barracuda.h"

Barracuda::Barracuda(const Point &pos, int weight, bool wild) : Pisces(
                     "Barracuda"), Carnivore(weight, 0.15) {
  description = "Barracuda is an animal found in tropical and subtropical"
                " oceans. It is snake-like in appearance with  fang-like teeth."
                " This ovipar animal has water as its habitat.";
  air_animal = false;
  land_animal = false;
  water_animal = true;
  position = pos;
  this->wild = wild;
  AddPrey("FrenchAngelFish");
  AddPrey("Lionfish");
  AddPrey("Ray");
  AddPrey("Seahorse");
}

string Barracuda::Interact() const {
  return "The barracuda is eating";
}
