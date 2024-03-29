//Author : Alvin

#ifndef GORILLA_H
#define GORILLA_H

#include "../mammals.h"
#include "../../diet/herbivore/herbivore.h"

/** @class Gorilla
  * Kelas Gorilla yang merepesentasikan gorilla.
  */
class Gorilla : public Mammals, public Herbivore {
public:

  /** @brief Constructor.
    * @details Menciptakan seekor gorilla dengan posisi, berat,
    * dan kelakuan (buas atau jinak) yang ditentukan.
    * @param pos Posisi gorilla.
    * @param weight berat gorilla.
    * @param wild Kelakuan gorilla.
    */
  Gorilla(const Point &pos, int weight, bool wild);

  /** @brief Melakukan interaksi dengan gorilla.
    * @return Experience yang dirasakan ketika berinteraksi dengan gorilla.
    */
  string Interact() const;

  /** @brief Mengembalikan pointer ke objek gorilla baru yang dibuat secara dinamis.
    * @return Pointer ke objek gorilla yang baru dibuat.
    */
  Animal *Clone() const {
    return new Gorilla(*this);
  };
};


#endif //GORILLA_H
