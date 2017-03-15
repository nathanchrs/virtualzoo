//Author : Agus

#ifndef LIONFISH_H
#define LIONFISH_H

#include "../Pisces.h"
#include "../../Diet/Carnivore/Carnivore.h"

/** @class Lionfish
  * Kelas Lionfish yang merepesentasikan lionfish.
  */
class Lionfish : public Pisces, public Carnivore {
public:
  /** @brief Constructor.
    * Menciptakan lionfish.
    */
  Lionfish(const Point &pos, int weight, bool wild);

  /** @brief Melakukan interaksi dengan lionfish.
    * @return Experience yang dirasakan ketika berinteraksi dengan lionfish.
    */
  string Interact() const;

  /** @brief Mengembalikan pointer ke objek baru yang dibuat secara dinamis.
    * @return Pointer ke objek yang baru dibuat.
    */
  Animal *Clone() const {
    return new Lionfish(*this);
  };
};


#endif //LIONFISH_H
