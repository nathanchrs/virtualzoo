#ifndef ORANGUTAN_H
#define ORANGUTAN_H

#include "../Mammals.h"
#include "../../Diet/Omnivore/Omnivore.h"

/** @class Orangutan
  * Kelas Orangutan yang merepesentasikan orangutan.
  */
class Orangutan : public Mammals, public Omnivore {
public:
    /** @brief Constructor.
      * Menciptakan orangutan.
      */
    Orangutan(int weight);

    /** @brief Melakukan interaksi dengan orangutan.
      * @return Experience yang dirasakan ketika berinteraksi dengan orangutan.
      */
    string interact() const;

    Animal* clone() const {
        return new Orangutan(*this);
    };
};

#endif //ORANGUTAN_H
