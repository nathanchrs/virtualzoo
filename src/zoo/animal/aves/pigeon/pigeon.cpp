//Author : Alvin

#include "pigeon.h"

Pigeon::Pigeon(const Point &pos, int weight, bool wild) : Aves("Pigeon"),
                                                          Herbivore(weight,
                                                                    0.10) {
  description = "Pigeons is stout-bodied birds with short necks, and short"
                " slender bills. Pigeon is a French word that derives from the"
                " Latin pipio, for a \"peeping\" chick. Pigeons and doves are"
                " distributed everywhere on Earth, except for the driest areas"
                " of the Sahara Desert, Antarctica and its surrounding islands,"
                " and the high Arctic. This ovipar animal has land and air as"
                " its habitat";
  air_animal = true;
  land_animal = true;
  water_animal = false;
  position = pos;
  this->wild = wild;
}

string Pigeon::Interact() const {
  return "The pigeon is eating its food that a visitor gave.";
}