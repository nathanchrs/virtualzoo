//Author : Alvin

#ifndef LION_H
#define LION_H

#include "../Mammals.h"
#include "../../Diet/Carnivore/Carnivore.h"

/** @class Lion
  * Kelas Lion yang merepesentasikan singa.
  */
class Lion : public Mammals, public Carnivore {
public:
  /** @brief Constructor.
    * Menciptakan singa.
    */
  Lion(const Point &pos, int weight, bool wild);

  /** @brief Melakukan interaksi dengan Lion.
    * @return Experience yang dirasakan ketika berinteraksi dengan singa.
    */
  string Interact() const;

  /** @brief Mengembalikan pointer ke objek baru yang dibuat secara dinamis.
    * @return Pointer ke objek yang baru dibuat.
    */
  Animal *Clone() const {
    return new Lion(*this);
  };
};


#endif //LION_H
