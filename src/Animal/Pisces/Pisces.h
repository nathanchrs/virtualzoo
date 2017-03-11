#ifndef PISCES_H
#define PISCES_H

#include "../Animal.h"

/** @class Mammals
  * Kelas abstrak Pisces yang merepesentasikan kelas hewan Pisces.
  */
class Pisces : public Animal {
public:
    /** @brief Constructor.
      * Menciptakan Pisces yang memiliki skinType "Scale" dan reproduction "?".
      */
    Pisces();
};

#endif //PISCES_H
