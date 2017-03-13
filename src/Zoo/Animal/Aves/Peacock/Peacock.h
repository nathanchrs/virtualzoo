#ifndef PEACOCK_H
#define PEACOCK_H

#include "../Aves.h"
#include "../../Diet/Omnivore/Omnivore.h"

/** @class Peacock
  * Kelas Peacock yang merepesentasikan burung merak.
  */
class Peacock : public Aves, public Omnivore {
public:
    /** @brief Constructor.
      * Menciptakan burung merak.
      */
    Peacock(const Point& pos, int _weight, bool wild);

    /** @brief Melakukan interaksi dengan burung merak.
      * @return Experience yang dirasakan ketika berinteraksi dengan burung merak.
      */
    string interact() const;

    Animal* clone() const {
        return new Peacock(*this);
    };
};


#endif //PEACOCK_H
