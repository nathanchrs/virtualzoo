#ifndef IGUANA_H
#define IGUANA_H

#include "../Reptile.h"
#include "../../Diet/Omnivore/Omnivore.h"
#include "../../Behaviour/TameAnimal/TameAnimal.h"

/** @class Iguana
  * Kelas Iguana yang merepesentasikan iguana.
  */
class Iguana : public Reptile, public Omnivore, public TameAnimal {
public:
    /** @brief Constructor.
      * Menciptakan iguana.
      */
    Iguana(int _weight);

    /** @brief Melakukan interaksi dengan iguana.
      * @return Experience yang dirasakan ketika berinteraksi dengan iguana.
      */
    string interact() const;
};


#endif //IGUANA_H
