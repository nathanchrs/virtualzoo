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
    * @details Menciptakan seekor burung beo dengan posisi, berat,
    * dan kelakuan (buas atau jinak) yang ditentukan.
    * @param pos Posisi burung beo.
    * @param weight berat burung beo.
    * @param wild Kelakuan burung beo.
    */
  Parrot(const Point &pos, int weight, bool wild);

  /** @brief Melakukan interaksi dengan burung beo.
    * @return Experience yang dirasakan ketika berinteraksi dengan burung beo.
    */
  string Interact() const;

  /** @brief Mengembalikan pointer ke objek burung beo baru yang dibuat secara dinamis.
    * @return Pointer ke objek burung beo yang baru dibuat.
    */
  Animal *Clone() const {
    return new Parrot(*this);
  };
};

#endif //PARROT_H
