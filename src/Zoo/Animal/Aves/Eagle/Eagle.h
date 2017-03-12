#ifndef EAGLE_H
#define EAGLE_H

#include "../Aves.h"
#include "../../Diet/Carnivore/Carnivore.h"
#include "../../Behaviour/TameAnimal/TameAnimal.h"

/** @class Eagle
  * Kelas Eagle yang merepesentasikan elang.
  */
class Eagle : public Aves, public Carnivore, public TameAnimal {
public:
    /** @brief Constructor.
      * Menciptakan elang.
      */
    Eagle(int _weight);

    /** @brief Melakukan interaksi dengan elang.
      * @return Experience yang dirasakan ketika berinteraksi dengan elang.
      */
    string interact() const;
};


#endif //EAGLE_H
