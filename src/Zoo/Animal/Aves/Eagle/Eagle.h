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
    * Menciptakan elang.
    */
  Eagle(const Point &pos, int weight, bool wild);

  /** @brief Melakukan interaksi dengan elang.
    * @return Experience yang dirasakan ketika berinteraksi dengan elang.
    */
  string Interact() const;

  /** @brief Mengembalikan pointer ke objek baru yang dibuat secara dinamis.
    * @return Pointer ke objek yang baru dibuat.
    */
  Animal *Clone() const {
    return new Eagle(*this);
  };
};


#endif //EAGLE_H
