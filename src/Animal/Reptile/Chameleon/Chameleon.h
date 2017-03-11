#ifndef CHAMELEON_H
#define CHAMELEON_H

#include "../Reptile.h"
#include "../../Diet/Carnivore/Carnivore.h"

/** @class Chameleon
  * Kelas Chameleon yang merepesentasikan bunglon.
  */
class Chameleon : public Reptile, public Carnivore{
public:
    /** @brief Constructor.
      * Menciptakan bunglon.
      */
    Chameleon(int _weight);

    /** @brief Melakukan interaksi dengan bunglon.
      * @return Experience yang dirasakan ketika berinteraksi dengan bunglon.
      */
    string Interact();
};


#endif //CHAMELEON_H
