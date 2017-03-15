//Author : Agus

#include "Iguana.h"

Iguana::Iguana(const Point &pos, int weight, bool wild) : Reptile("Iguana"),
                                                          Omnivore(weight,
                                                                   0.10) {
  description = "Iguanas are lizards identified by their stocky stature,"
                " the saggy skin on their throats and the"
                " spines that protrude from their heads, necks,"
                " backs and tails. Iguanas live 15 to 20 years"
                " if cared for properly. The native range of the green iguana"
                " extends from southern Mexico to central Brazil.";
  air_animal = false;
  land_animal = true;
  water_animal = false;
  position = pos;
  this->wild = wild;
}

string Iguana::Interact() const {
  return "The iguana is climbing a tree";
}
