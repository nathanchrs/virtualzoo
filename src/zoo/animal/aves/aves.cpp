//Author : Agus, Alvin

#include "aves.h"

/** @brief Constructor.
  * Menciptakan Aves yang memiliki skinType "Feather" dan reproduction "Ovipar".
  */
Aves::Aves(const string &name) {
  this->name = name;
  skin_type = Feather;
  reproduction = Ovipar;
}
