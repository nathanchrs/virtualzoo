#ifndef PIGEON_H
#define PIGEON_H

#include "../Aves.h"
#include "../../Diet/Herbivore/Herbivore.h"
#include "../../Behaviour/TameAnimal/TameAnimal.h"

/** @class Pigeon
  * Kelas Pigeon yang merepesentasikan burung merpati.
  */
class Pigeon : public Aves, public Herbivore, public TameAnimal {
public:
    /** @brief Constructor.
     * Menciptakan burung merpati.
     */
    Pigeon(int _weight);

    /** @brief Melakukan interaksi dengan burung merpati.
      * @return Experience yang dirasakan ketika berinteraksi dengan burung merpati.
      */
    string interact() const;
};

#endif //PIGEON_H
