//Author : Agus

#ifndef PIGEON_H
#define PIGEON_H

#include "../aves.h"
#include "../../diet/herbivore/herbivore.h"

/** @class Pigeon
  * Kelas Pigeon yang merepesentasikan burung merpati.
  */
class Pigeon : public Aves, public Herbivore {
public:
  /** @brief Constructor.
    * @details Menciptakan seekor burung merpati dengan posisi, berat,
    * dan kelakuan (buas atau jinak) yang ditentukan.
    * @param pos Posisi burung merpati.
    * @param weight berat burung merpati.
    * @param wild Kelakuan burung merpati.
    */
  Pigeon(const Point& pos, int weight, bool wild);

  /** @brief Melakukan interaksi dengan burung merpati.
    * @return Experience yang dirasakan ketika berinteraksi dengan burung merpati.
    */
  string Interact() const;

  /** @brief Mengembalikan pointer ke objek burung merpati baru yang dibuat secara dinamis.
    * @return Pointer ke objek burung merpati yang baru dibuat.
    */
  Animal* Clone() const {
    return new Pigeon(*this);
  };
};

#endif //PIGEON_H
