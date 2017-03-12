#ifndef LION_H
#define LION_H

#include "../Mammals.h"
#include "../../Diet/Carnivore/Carnivore.h"
#include "../../Behaviour/TameAnimal/TameAnimal.h"

/** @class Lion
  * Kelas Lion yang merepesentasikan singa.
  */
class Lion : public Mammals, public Carnivore, public TameAnimal{
public:
    /** @brief Constructor.
      * Menciptakan singa.
      */
    Lion(int _weight);

    /** @brief Melakukan interaksi dengan Lion.
      * @return Experience yang dirasakan ketika berinteraksi dengan singa.
      */
    string interact() const;
};


#endif //LION_H
