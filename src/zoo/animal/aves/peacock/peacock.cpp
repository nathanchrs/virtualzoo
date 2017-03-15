//Author : Alvin

#include "peacock.h"

Peacock::Peacock(const Point &pos, int weight, bool wild) : Aves("Peacock"),
                                                            Omnivore(weight,
                                                                     0.15) {
  description = "The Peacock is found in many locations including Burma, Indian,"
      " and Sri Lanka. The main body of the Peacock is bluish green in color."
      " Peacock has colorful tail. The colorful tail of the Peacock is fanned"
      " out to be able to show dominance and for the purpose of attracting a"
      " mate. This ovipar animal has land as its habitat.";
  air_animal = false;
  land_animal = true;
  water_animal = false;
  position = pos;
  this->wild = wild;
}

string Peacock::Interact() const {
  return "The peacock is spreading its tail";
}