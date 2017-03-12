#ifndef KOMODODRAGON_H
#define KOMODODRAGON_H

#include "../Reptile.h"
#include "../../Diet/Carnivore/Carnivore.h"
#include "../../Behaviour/TameAnimal/TameAnimal.h"

/** @class KomodoDragon
  * Kelas KomodoDragon yang merepesentasikan komodo.
  */
class KomodoDragon : public Reptile, public Carnivore, public TameAnimal {
public:
    /** @brief Constructor.
      * Menciptakan komodo.
      */
    KomodoDragon(int _weight);

    /** @brief Melakukan interaksi dengan komodo.
      * @return Experience yang dirasakan ketika berinteraksi dengan komodo.
      */
    string interact() const;
};

#endif //KOMODODRAGON_H
