//Author : Alvin

#include "lionfish.h"

Lionfish::Lionfish(const Point &pos, int weight, bool wild) : Pisces(
                   "Lionfish"), Carnivore(weight, 0.10) {
  description = "Lionfish is an animal native to the Indo-Pacific. It is"
                " characterized by conspicuous warning coloration and venomous"
                " spiky fin rays. This ovipar animal has water as its habitat.";
  air_animal = false;
  land_animal = false;
  water_animal = true;
  position = pos;
  this->wild = wild;
}

string Lionfish::Interact() const {
  return "Whoa! I thought it was plant. It is lionfish!";
}
