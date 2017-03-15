//Author : Alvin

#ifndef LEOPARD_H
#define LEOPARD_H

#include "../mammals.h"
#include "../../diet/carnivore/carnivore.h"

/** @class Leopard
  * Kelas Leopard yang merepesentasikan macan tutul.
  */
class Leopard : public Mammals, public Carnivore {
public:

  /** @brief Constructor.
    * @details Menciptakan seekor macan tutul dengan posisi, berat,
    * dan kelakuan (buas atau jinak) yang ditentukan.
    * @param pos Posisi macan tutul.
    * @param weight berat macan tutul.
    * @param wild Kelakuan macan tutul.
    */
  Leopard(const Point &pos, int weight, bool wild);

  /** @brief Melakukan interaksi dengan macan tutul.
    * @return Experience yang dirasakan ketika berinteraksi dengan macan tutul.
    */
  string Interact() const;

  /** @brief Mengembalikan pointer ke objek macan tutul baru yang dibuat secara dinamis.
    * @return Pointer ke objek macan tutul yang baru dibuat.
    */
  Animal *Clone() const {
    return new Leopard(*this);
  };
};

#endif //LEOPARD_H
