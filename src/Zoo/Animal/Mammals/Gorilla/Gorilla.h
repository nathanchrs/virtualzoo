#ifndef GORILA_H
#define GORILA_H

#include "../Mammals.h"
#include "../../Diet/Herbivore/Herbivore.h"

/** @class Gorilla
  * Kelas Gorilla yang merepesentasikan gorilla.
  */
class Gorilla : public Mammals, public Herbivore {
public:

  /** @brief Constructor.
    * Menciptakan gorilla.
    */
  Gorilla(const Point &pos, int weight, bool wild);

  /** @brief Melakukan interaksi dengan gorilla.
    * @return Experience yang dirasakan ketika berinteraksi dengan gorilla.
    */
  string Interact() const;

  /** @brief Mengembalikan pointer ke objek baru yang dibuat secara dinamis.
    * @return Pointer ke objek yang baru dibuat.
    */
  Animal *Clone() const {
    return new Gorilla(*this);
  };
};


#endif //GORILA_H
