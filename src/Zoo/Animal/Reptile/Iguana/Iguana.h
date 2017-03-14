#ifndef IGUANA_H
#define IGUANA_H

#include "../Reptile.h"
#include "../../Diet/Omnivore/Omnivore.h"

/** @class Iguana
  * Kelas Iguana yang merepesentasikan iguana.
  */
class Iguana : public Reptile, public Omnivore {
public:
  /** @brief Constructor.
    * Menciptakan iguana.
    */
  Iguana(const Point &pos, int weight, bool wild);

  /** @brief Melakukan interaksi dengan iguana.
    * @return Experience yang dirasakan ketika berinteraksi dengan iguana.
    */
  string Interact() const;

  /** @brief Mengembalikan pointer ke objek baru yang dibuat secara dinamis.
    * @return Pointer ke objek yang baru dibuat.
    */
  Animal *Clone() const {
    return new Iguana(*this);
  };
};


#endif //IGUANA_H
