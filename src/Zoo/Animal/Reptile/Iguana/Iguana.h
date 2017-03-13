#ifndef IGUANA_H
#define IGUANA_H

#include "../Reptile.h"
#include "../../Diet/Omnivore/Omnivore.h"

/** @class Iguana
  * Kelas Iguana yang merepesentasikan iguana.
  */
class Iguana : public Reptile, public Omnivore {
public:
    /** @brief Constructor.
      * Menciptakan iguana.
      */
    Iguana(int _weight);

    /** @brief Melakukan interaksi dengan iguana.
      * @return Experience yang dirasakan ketika berinteraksi dengan iguana.
      */
    string interact() const;

    Animal* clone() const {
        return new Iguana(*this);
    };
};


#endif //IGUANA_H
