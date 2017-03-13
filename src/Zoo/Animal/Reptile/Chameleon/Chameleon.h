#ifndef CHAMELEON_H
#define CHAMELEON_H

#include "../Reptile.h"
#include "../../Diet/Carnivore/Carnivore.h"

/** @class Chameleon
  * Kelas Chameleon yang merepesentasikan bunglon.
  */
class Chameleon : public Reptile, public Carnivore {
public:
    /** @brief Constructor.
      * Menciptakan bunglon.
      */
    Chameleon(const Point& pos, int _weight, bool wild);

    /** @brief Melakukan interaksi dengan bunglon.
      * @return Experience yang dirasakan ketika berinteraksi dengan bunglon.
      */
    string interact() const;

    Animal* clone() const {
        return new Chameleon(*this);
    };
};


#endif //CHAMELEON_H
