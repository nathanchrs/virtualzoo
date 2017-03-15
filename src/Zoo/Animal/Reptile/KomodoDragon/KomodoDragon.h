//Author : Alvin

#ifndef KOMODODRAGON_H
#define KOMODODRAGON_H

#include "../Reptile.h"
#include "../../Diet/Carnivore/Carnivore.h"

/** @class KomodoDragon
  * Kelas KomodoDragon yang merepesentasikan komodo.
  */
class KomodoDragon : public Reptile, public Carnivore {
public:
  /** @brief Constructor.
    * @details Menciptakan seekor komodo dengan posisi, berat,
    * dan kelakuan (buas atau jinak) yang ditentukan.
    * @param pos Posisi komodo.
    * @param weight berat komodo.
    * @param wild Kelakuan komodo.
    */
  KomodoDragon(const Point &pos, int weight, bool wild);

  /** @brief Melakukan interaksi dengan komodo.
    * @return Experience yang dirasakan ketika berinteraksi dengan komodo.
    */
  string Interact() const;

  /** @brief Mengembalikan pointer ke objek komodo baru yang dibuat secara dinamis.
    * @return Pointer ke objek komodo yang baru dibuat.
    */
  Animal *Clone() const {
    return new KomodoDragon(*this);
  };
};

#endif //KOMODODRAGON_H
