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
    * Menciptakan komodo.
    */
  KomodoDragon(const Point &pos, int weight, bool wild);

  /** @brief Melakukan interaksi dengan komodo.
    * @return Experience yang dirasakan ketika berinteraksi dengan komodo.
    */
  string Interact() const;

  /** @brief Mengembalikan pointer ke objek baru yang dibuat secara dinamis.
    * @return Pointer ke objek yang baru dibuat.
    */
  Animal *Clone() const {
    return new KomodoDragon(*this);
  };
};

#endif //KOMODODRAGON_H
