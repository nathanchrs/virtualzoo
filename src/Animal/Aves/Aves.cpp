#include "Aves.h"

/** @brief Constructor.
  * Menciptakan Aves yang memiliki skinType "Feather" dan reproduction "Ovipar".
  */
Aves::Aves(const string &name) : Animal(name), skinType(SkinType::Feather), reproduction(Reproduction::Ovipar) {}
