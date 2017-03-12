#include "Reptile.h"

/** @brief Constructor.
  * Menciptakan Reptil yang memiliki skinType "Scales" dan reproduction "Ovipar".
  */
Reptile::Reptile(const string &name) : Animal(name) {
    skinType = Scales;
    reproduction = Ovipar;
}