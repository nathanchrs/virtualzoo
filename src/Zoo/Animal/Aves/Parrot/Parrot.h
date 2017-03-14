#ifndef PARROT_H
#define PARROT_H

#include "../Aves.h"
#include "../../Diet/Herbivore/Herbivore.h"

/** @class Parrot
  * Kelas Parrot yang merepesentasikan burung beo.
  */
class Parrot : public Aves, public Herbivore {
public:

  /** @brief Constructor.
    * Menciptakan burung beo.
    */
  Parrot(const Point &pos, int weight, bool wild);

  /** @brief Melakukan interaksi dengan burung beo.
    * @return Experience yang dirasakan ketika berinteraksi dengan burung beo.
    */
  string Interact() const;

  /** @brief Mengembalikan pointer ke objek baru yang dibuat secara dinamis.
    * @return Pointer ke objek yang baru dibuat.
    */
  Animal *Clone() const {
    return new Parrot(*this);
  };
};

#endif //PARROT_H
