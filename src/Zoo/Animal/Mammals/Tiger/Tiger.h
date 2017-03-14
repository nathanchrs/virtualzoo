#ifndef TIGER_H
#define TIGER_H

#include "../Mammals.h"
#include "../../Diet/Carnivore/Carnivore.h"

/** @class Tiger
  * Kelas Tiger yang merepesentasikan harimau.
  */
class Tiger : public Mammals, public Carnivore {
public:
  /** @brief Constructor.
    * Menciptakan harimau.
    */
  Tiger(const Point &pos, int weight, bool wild);

  /** @brief Melakukan interaksi dengan harimau.
    * @return Experience yang dirasakan ketika berinteraksi dengan harimau.
    */
  string Interact() const;

  /** @brief Mengembalikan pointer ke objek baru yang dibuat secara dinamis.
    * @return Pointer ke objek yang baru dibuat.
    */
  Animal *Clone() const {
    return new Tiger(*this);
  };
};

#endif //TIGER_H
