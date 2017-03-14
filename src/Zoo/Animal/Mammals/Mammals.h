#ifndef MAMMALS_H
#define MAMMALS_H

#include "../Animal.h"

/** @class Mammals
  * Kelas abstrak Mammals yang merepesentasikan kelas hewan Mamalia.
  */
class Mammals : public virtual Animal {
public:
  /** @brief Constructor.
   * Menciptakan Mamalia yang memiliki skinType "Fur" dan reproduction "Vivipar"
   * @param name Nama hewan
   */
  Mammals(const string &name);
};

#endif //MAMMALS_H
