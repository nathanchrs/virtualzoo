//Author : Agus

#ifndef LIONFISH_H
#define LIONFISH_H

#include "../pisces.h"
#include "../../diet/carnivore/carnivore.h"

/** @class Lionfish
  * Kelas Lionfish yang merepesentasikan lionfish.
  */
class Lionfish : public Pisces, public Carnivore {
public:
  /** @brief Constructor.
    * @details Menciptakan seekor lionfish dengan posisi, berat,
    * dan kelakuan (buas atau jinak) yang ditentukan.
    * @param pos Posisi lionfish.
    * @param weight berat lionfish.
    * @param wild Kelakuan lionfish.
    */
  Lionfish(const Point &pos, int weight, bool wild);

  /** @brief Melakukan interaksi dengan lionfish.
    * @return Experience yang dirasakan ketika berinteraksi dengan lionfish.
    */
  string Interact() const;

  /** @brief Mengembalikan pointer ke objek lionfish baru yang dibuat secara dinamis.
    * @return Pointer ke objek lionfish yang baru dibuat.
    */
  Animal *Clone() const {
    return new Lionfish(*this);
  };
};


#endif //LIONFISH_H
