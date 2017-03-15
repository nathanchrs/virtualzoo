//Author : Alvin

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
    * @details Menciptakan seekor iguana dengan posisi, berat,
    * dan kelakuan (buas atau jinak) yang ditentukan.
    * @param pos Posisi iguana.
    * @param weight berat iguana.
    * @param wild Kelakuan iguana.
    */
  Iguana(const Point &pos, int weight, bool wild);

  /** @brief Melakukan interaksi dengan iguana.
    * @return Experience yang dirasakan ketika berinteraksi dengan iguana.
    */
  string Interact() const;

  /** @brief Mengembalikan pointer ke objek iguana baru yang dibuat secara dinamis.
    * @return Pointer ke objek iguana yang baru dibuat.
    */
  Animal *Clone() const {
    return new Iguana(*this);
  };
};


#endif //IGUANA_H
