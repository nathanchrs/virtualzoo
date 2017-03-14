#ifndef REPTILE_H
#define REPTILE_H

#include "../Animal.h"

/** @class Reptile
  * Kelas abstrak Reptile yang merepesentasikan kelas hewan Reptil.
  */
class Reptile : public virtual Animal{
public:
    /** @brief Constructor.
      * Menciptakan Reptil yang memiliki skinType "Scales" dan reproduction "Ovipar".
      * @param name Nama hewan
      */
    Reptile(const string &name);
};

#endif //REPTILE_H
