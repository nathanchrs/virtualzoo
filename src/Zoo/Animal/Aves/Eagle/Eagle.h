//Author : Agus

#ifndef EAGLE_H
#define EAGLE_H

#include "../Aves.h"
#include "../../Diet/Carnivore/Carnivore.h"

/** @class Eagle
  * Kelas Eagle yang merepesentasikan elang.
  */
class Eagle : public Aves, public Carnivore {
public:
  /** @brief Constructor.
    * @details Menciptakan seekor elang dengan posisi, berat,
    * dan kelakuan (buas atau jinak) yang ditentukan.
    * @param pos Posisi elang.
    * @param weight berat elang.
    * @param wild Kelakuan elang.
    */
  Eagle(const Point &pos, int weight, bool wild);

  /** @brief Melakukan interaksi dengan elang.
    * @return Experience yang dirasakan ketika berinteraksi dengan elang.
    */
  string Interact() const;

  /** @brief Mengembalikan pointer ke objek elang baru yang dibuat secara dinamis.
    * @return Pointer ke objek elang yang baru dibuat.
    */
  Animal *Clone() const {
    return new Eagle(*this);
  };
};


#endif //EAGLE_H
