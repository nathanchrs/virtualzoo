#ifndef OWL_H
#define OWL_H

#include "../Aves.h"
#include "../../Diet/Carnivore/Carnivore.h"
#include "../../Behaviour/TameAnimal/TameAnimal.h"

/** @class Owl
  * Kelas Owl yang merepesentasikan burung hantu.
  */
class Owl : public Aves, public Carnivore, public TameAnimal{
public:
    /** @brief Constructor.
      * Menciptakan burung hantu.
      */
    Owl(int _weight);

    /** @brief Melakukan interaksi dengan burung hantu.
      * @return Experience yang dirasakan ketika berinteraksi dengan burung hantu.
      */
    string interact() const;
};


#endif //OWL_H
