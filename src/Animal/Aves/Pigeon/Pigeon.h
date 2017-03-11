#ifndef PIGEON_H
#define PIGEON_H


#include "../Aves.h"
#include "../../Diet/Herbivore/Herbivore.h"

/** @class Pigeon
  * Kelas Pigeon yang merepesentasikan burung merpati.
  */
class Pigeon : public Aves, public Herbivore {
public:
    /** @brief Constructor.
     * Menciptakan burung merpati.
     */
    Pigeon(int _weight);

    /** @brief Melakukan interaksi dengan burung merpati.
      * @return Experience yang dirasakan ketika berinteraksi dengan burung merpati.
      */
    string Interact();
};


#endif //PIGEON_H
