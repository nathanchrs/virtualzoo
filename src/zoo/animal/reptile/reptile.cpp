//Author : Agus, Alvin

#include "reptile.h"

/** @brief Constructor.
  * Menciptakan Reptil yang memiliki skinType "Scales" dan reproduction "Ovipar"
  */
Reptile::Reptile(const string &name) {
  this->name = name;
  skin_type = Scales;
  reproduction = Ovipar;
}