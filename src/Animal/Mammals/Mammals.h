#ifndef MAMMALS_H
#define MAMMALS_H

#include "../Animal.h"

/** @class Mammals
  * Kelas abstrak Mammals yang merepesentasikan kelas hewan Mamalia.
  */
class Mammals : public Animal{
public:
    /** @brief Constructor.
     * Menciptakan Mamalia yang memiliki skinType "Hair" dan reproduction "Vivipar".
     */
    Mammals();
};

#endif //MAMMALS_H
