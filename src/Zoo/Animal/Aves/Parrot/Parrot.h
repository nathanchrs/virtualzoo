#ifndef PARROT_H
#define PARROT_H

#include "../Aves.h"
#include "../../Diet/Herbivore/Herbivore.h"

/** @class Parrot
  * Kelas Parrot yang merepesentasikan burung beo.
  */
class Parrot : public Aves, public Herbivore {
    /** @brief Constructor.
      * Menciptakan burung beo.
      */
    Parrot(int _weight);

    /** @brief Melakukan interaksi dengan burung beo.
      * @return Experience yang dirasakan ketika berinteraksi dengan burung beo.
      */
    string interact() const;

    Animal* clone() const {
        return new Parrot(*this);
    };
};

#endif //PARROT_H
