#ifndef TIGER_H
#define TIGER_H

#include "../Mammals.h"
#include "../../Diet/Carnivore/Carnivore.h"
#include "../../Behaviour/TameAnimal/TameAnimal.h"

/** @class Tiger
  * Kelas Tiger yang merepesentasikan harimau.
  */
class Tiger : public Mammals, public Carnivore, public TameAnimal {
public:
    /** @brief Constructor.
      * Menciptakan harimau.
      */
    Tiger(int _weight);

    /** @brief Melakukan interaksi dengan harimau.
      * @return Experience yang dirasakan ketika berinteraksi dengan harimau.
      */
    string interact() const;
};

#endif //TIGER_H
