#include "Mammals.h"

/** @brief Constructor.
  * Menciptakan Mammals yang memiliki skinType "Fur" dan reproduction "Vivipar".
  */
Mammals::Mammals(const string &name){
    this->name = name;
    skinType = Fur;
    reproduction = Vivipar;
}
