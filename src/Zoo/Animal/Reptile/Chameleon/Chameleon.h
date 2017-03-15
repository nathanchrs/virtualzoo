//Author : Alvin

#ifndef CHAMELEON_H
#define CHAMELEON_H

#include "../Reptile.h"
#include "../../Diet/Carnivore/Carnivore.h"

/** @class Chameleon
  * Kelas Chameleon yang merepesentasikan bunglon.
  */
class Chameleon : public Reptile, public Carnivore {
public:
  /** @brief Constructor.
    * @details Menciptakan seekor bunglon dengan posisi, berat,
    * dan kelakuan (buas atau jinak) yang ditentukan.
    * @param pos Posisi bunglon.
    * @param weight berat bunglon.
    * @param wild Kelakuan bunglon.
    */
  Chameleon(const Point &pos, int weight, bool wild);

  /** @brief Melakukan interaksi dengan bunglon.
    * @return Experience yang dirasakan ketika berinteraksi dengan bunglon.
    */
  string Interact() const;

  /** @brief Mengembalikan pointer ke objek bunglon baru yang dibuat secara dinamis.
    * @return Pointer ke objek bunglon yang baru dibuat.
    */
  Animal *Clone() const {
    return new Chameleon(*this);
  };
};


#endif //CHAMELEON_H
