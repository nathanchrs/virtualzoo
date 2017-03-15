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
    * Menciptakan bunglon.
    */
  Chameleon(const Point &pos, int weight, bool wild);

  /** @brief Melakukan interaksi dengan bunglon.
    * @return Experience yang dirasakan ketika berinteraksi dengan bunglon.
    */
  string Interact() const;

  /** @brief Mengembalikan pointer ke objek baru yang dibuat secara dinamis.
    * @return Pointer ke objek yang baru dibuat.
    */
  Animal *Clone() const {
    return new Chameleon(*this);
  };
};


#endif //CHAMELEON_H
