//Author : Jordhy

#ifndef PISCES_H
#define PISCES_H

#include "../Animal.h"

/** @class Mammals
  * Kelas abstrak Pisces yang merepesentasikan kelas hewan Pisces.
  */
class Pisces : public virtual Animal {
public:
  /** @brief Constructor.
    * Menciptakan Pisces yang memiliki skinType "Scales" dan reproduction "Ovipar".
    * @param name Nama hewan.
    */
  Pisces(const string &name);
};

#endif //PISCES_H
