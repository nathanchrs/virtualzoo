//Author : Alvin

#include "Parrot.h"

Parrot::Parrot(const Point &pos, int weight, bool wild) : Aves("Parrot"),
                                                          Herbivore(weight,
                                                                    0.05) {
  description = "Parrot is an animal that can be found in South America"
                " and Australasia. Parrots are intelligent birds. They have"
                " relatively large brains, they can learn, and they can use"
                " simple tools. This ovipar animal has land and air as its"
                " habitat.";
  air_animal = true;
  land_animal = true;
  water_animal = false;
  position = pos;
  this->wild = wild;
}

string Parrot::Interact() const {
  return "The parrot is imitating someone's voice that said 'I'm handsome!'";
}