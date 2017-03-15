//Author : Agus

#include "gorilla.h"

Gorilla::Gorilla(const Point &pos, int weight, bool wild) : Mammals("Gorilla"),
                                                            Herbivore(weight,
                                                                      0.25) {
  description = "Gorilla is an animal from Africa. It is the largest living"
                " primate and the closest living relatives to humans."
                " This vivipar animal has land as its habitat.";
  air_animal = false;
  land_animal = true;
  water_animal = false;
  position = pos;
  this->wild = wild;
}

string Gorilla::Interact() const {
  return "The gorilla is playing with its toy";
}
