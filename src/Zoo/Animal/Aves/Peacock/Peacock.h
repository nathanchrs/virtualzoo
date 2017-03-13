#ifndef PEACOCK_H
#define PEACOCK_H

#include "../Aves.h"
#include "../../Diet/Omnivore/Omnivore.h"

/** @class Peacock
  * Kelas Peacock yang merepesentasikan burung merak.
  */
class Peacock : public Aves, public Omnivore, public TameAnimal {
public:
    /** @brief Constructor.
      * Menciptakan burung merak.
      */
    Peacock(int _weight);

    /** @brief Melakukan interaksi dengan burung merak.
      * @return Experience yang dirasakan ketika berinteraksi dengan burung merak.
      */
    string interact() const;

    Animal* clone() const {
        return new Peacock(*this);
    };
};


#endif //PEACOCK_H
