//Author : Agus

#include "Orangutan.h"

Orangutan::Orangutan(const Point &pos, int weight, bool wild) : Mammals(
                     "Orangutan"), Omnivore(weight, 0.20) {
  description = "Orangutan is an animal from Indonesia and Malaysia. It is"
                " one of the most intelligent primates that could use a"
                " variety of sophisticated tools and well known for its great"
                " learning abilities. This vivipar animal has land as its"
                " habitat.";
  air_animal = false;
  land_animal = true;
  water_animal = false;
  position = pos;
  this->wild = wild;
}

string Orangutan::Interact() const {
  return "The orangutan is hanging around the trees, picking every fruits and"
         " eating them";
}
