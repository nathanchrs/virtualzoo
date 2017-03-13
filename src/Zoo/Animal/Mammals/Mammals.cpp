#include "Mammals.h"

/** @brief Constructor.
  * Menciptakan Mammals yang memiliki skinType "Fur" dan reproduction "Vivipar".
  */
Mammals::Mammals(const string &name) : Animal(name) {
    skinType = Fur;
    reproduction = Vivipar;
}
