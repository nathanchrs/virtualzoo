#ifndef REPTILE_H
#define REPTILE_H

#include "../Animal.h"

/** @class Reptile
  * Kelas abstrak Reptile yang merepesentasikan kelas hewan Reptil.
  */
class Reptile : public Animal {
public:
    /** @brief Constructor.
      * Menciptakan Reptil yang memiliki skinType "Scutes" dan reproduction "Ovovivipar".
      */
    Reptile();
};

#endif //REPTILE_H
