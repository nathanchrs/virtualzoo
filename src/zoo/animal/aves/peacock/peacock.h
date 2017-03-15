//Author : Agus

#ifndef PEACOCK_H
#define PEACOCK_H

#include "../aves.h"
#include "../../diet/omnivore/omnivore.h"

/** @class Peacock
  * Kelas Peacock yang merepesentasikan burung merak.
  */
class Peacock : public Aves, public Omnivore {
public:
  /** @brief Constructor.
    * @details Menciptakan seekor elang dengan posisi, berat,
    * dan kelakuan (buas atau jinak) yang ditentukan.
    * @param pos Posisi elang.
    * @param weight berat elang.
    * @param wild Kelakuan elang.
    */
  Peacock(const Point &pos, int weight, bool wild);

  /** @brief Melakukan interaksi dengan burung merak.
    * @return Experience yang dirasakan ketika berinteraksi dengan burung merak.
    */
  string Interact() const;

  /** @brief Mengembalikan pointer ke objek burung merak baru yang dibuat secara dinamis.
    * @return Pointer ke objek burung merak yang baru dibuat.
    */
  Animal *Clone() const {
    return new Peacock(*this);
  };
};


#endif //PEACOCK_H
