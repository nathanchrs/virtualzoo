#include "Pigeon.h"

Pigeon::Pigeon(int _weight) : Aves("Pigeon"), Herbivore(_weight) {
    description = "Pigeons is stout-bodied birds with short necks, and short slender bills."
                  "Pigeon is a French word that derives from the Latin pipio, for a \"peeping\" chick."
                  "Pigeons and doves are distributed everywhere on Earth, except for the driest areas of the Sahara"
                  " Desert, Antarctica and its surrounding islands, and the high Arctic. This ovipar animal has land and air as its habitat";
}

string Pigeon::interact() const {
    return "The pigeon is eating its food that the visitor gave";
}