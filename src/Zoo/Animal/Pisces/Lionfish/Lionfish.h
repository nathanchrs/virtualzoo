#ifndef LIONFISH_H
#define LIONFISH_H

#include "../Pisces.h"
#include "../../Diet/Carnivore/Carnivore.h"

/** @class Lionfish
  * Kelas Lionfish yang merepesentasikan lionfish.
  */
class Lionfish : public Pisces, public Carnivore {
public:
    /** @brief Constructor.
      * Menciptakan lionfish.
      */
    Lionfish(int _weight);

    /** @brief Melakukan interaksi dengan lionfish.
      * @return Experience yang dirasakan ketika berinteraksi dengan lionfish.
      */
    string interact() const;

    Animal* clone() const {
        return new Lionfish(*this);
    };
};


#endif //LIONFISH_H
