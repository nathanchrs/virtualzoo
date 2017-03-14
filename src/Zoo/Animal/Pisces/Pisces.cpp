#include "Pisces.h"

/** @brief Constructor.
  * Menciptakan Pisces yang memiliki skinType "Scale" dan reproduction "Ovipar".
  */
Pisces::Pisces(const string &name){
    this->name = name;
    skinType = Scales;
    reproduction = Ovipar;
}