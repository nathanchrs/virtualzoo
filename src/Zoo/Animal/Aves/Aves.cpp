#include "Aves.h"

/** @brief Constructor.
  * Menciptakan Aves yang memiliki skinType "Feather" dan reproduction "Ovipar".
  */
Aves::Aves(const string &name){
    this->name = name;
    skinType = Feather;
    reproduction = Ovipar;
}
