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
    Pigeon(const Point& pos, int _weight, bool wild);

    /** @brief Melakukan interaksi dengan burung merpati.
      * @return Experience yang dirasakan ketika berinteraksi dengan burung merpati.
      */
    string interact() const;

    Animal* clone() const {
        return new Pigeon(*this);
    };
};

#endif //PIGEON_H
