#ifndef ORANGUTAN_H
#define ORANGUTAN_H

#include "../Mammals.h"
#include "../../Diet/Omnivore/Omnivore.h"
#include "../../Behaviour/TameAnimal/TameAnimal.h"

/** @class Orangutan
  * Kelas Orangutan yang merepesentasikan orangutan.
  */
class Orangutan : public Mammals, public Omnivore, public TameAnimal {
public:
    /** @brief Constructor.
      * Menciptakan orangutan.
      */
    Orangutan(int _weight);

    /** @brief Melakukan interaksi dengan orangutan.
      * @return Experience yang dirasakan ketika berinteraksi dengan orangutan.
      */
    string interact() const;
};

#endif //ORANGUTAN_H