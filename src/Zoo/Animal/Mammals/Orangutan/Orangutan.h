#ifndef ORANGUTAN_H
#define ORANGUTAN_H

#include "../Mammals.h"
#include "../../Diet/Omnivore/Omnivore.h"

/** @class Orangutan
  * Kelas Orangutan yang merepesentasikan orangutan.
  */
class Orangutan : public Mammals, public Omnivore {
public:
  /** @brief Constructor.
    * Menciptakan orangutan.
    */
  Orangutan(const Point &pos, int weight, bool wild);

  /** @brief Melakukan interaksi dengan orangutan.
    * @return Experience yang dirasakan ketika berinteraksi dengan orangutan.
    */
  string Interact() const;

  /** @brief Mengembalikan pointer ke objek baru yang dibuat secara dinamis.
    * @return Pointer ke objek yang baru dibuat.
    */
  Animal *Clone() const {
    return new Orangutan(*this);
  };
};

#endif //ORANGUTAN_H
