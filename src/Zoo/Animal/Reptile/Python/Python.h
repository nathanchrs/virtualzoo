#ifndef PYTHON_H
#define PYTHON_H

#include "../Reptile.h"
#include "../../Diet/Carnivore/Carnivore.h"

/** @class Python
  * Kelas Python yang merepesentasikan ular piton.
  */
class Python : public Reptile, public Carnivore {
public:
  /** @brief Constructor.
    * Menciptakan ular piton.
    */
  Python(const Point &pos, int weight, bool wild);

  /** @brief Melakukan interaksi dengan ular piton.
    * @return Experience yang dirasakan ketika berinteraksi dengan ular piton.
    */
  string Interact() const;

  /** @brief Mengembalikan pointer ke objek baru yang dibuat secara dinamis.
    * @return Pointer ke objek yang baru dibuat.
    */
  Animal *Clone() const {
    return new Python(*this);
  };
};


#endif //PYTHON_H
