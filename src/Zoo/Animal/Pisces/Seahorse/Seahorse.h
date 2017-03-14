#ifndef SEAHORSE_H
#define SEAHORSE_H

#include "../Pisces.h"
#include "../../Diet/Carnivore/Carnivore.h"

/** @class Seahorse
  * Kelas Seahorse yang merepesentasikan kuda laut.
  */
class Seahorse : public Pisces, public Carnivore {
public:
  /** @brief Constructor.
    * Menciptakan kuda laut.
    */
  Seahorse(const Point &pos, int weight, bool wild);

  /** @brief Melakukan interaksi dengan kuda laut.
    * @return Experience yang dirasakan ketika berinteraksi dengan kuda laut.
    */
  string Interact() const;

  /** @brief Mengembalikan pointer ke objek baru yang dibuat secara dinamis.
    * @return Pointer ke objek yang baru dibuat.
    */
  Animal *Clone() const {
    return new Seahorse(*this);
  };
};

#endif //SEAHORSE_H
