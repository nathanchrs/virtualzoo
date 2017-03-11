#ifndef AVES_H
#define AVES_H

#include "../Animal.h"

/** @class Aves
  * Kelas abstrak Aves yang merepesentasikan kelas hewan Aves.
  */
class Aves : public Animal{
public:
    /** @brief Constructor.
      * Menciptakan Aves yang memiliki skinType "Feather" dan reproduction "Ovipar".
      */
    Aves();
};

#endif //AVES_H
