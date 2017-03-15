//Author : Agus

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
    * @details Menciptakan seekor kuda laut dengan posisi, berat,
    * dan kelakuan (buas atau jinak) yang ditentukan.
    * @param pos Posisi kuda laut.
    * @param weight berat kuda laut.
    * @param wild Kelakuan kuda laut.
    */
  Seahorse(const Point &pos, int weight, bool wild);

  /** @brief Melakukan interaksi dengan kuda laut.
    * @return Experience yang dirasakan ketika berinteraksi dengan kuda laut.
    */
  string Interact() const;

  /** @brief Mengembalikan pointer ke objek kuda laut baru yang dibuat secara dinamis.
    * @return Pointer ke objek kuda laut yang baru dibuat.
    */
  Animal *Clone() const {
    return new Seahorse(*this);
  };
};

#endif //SEAHORSE_H
