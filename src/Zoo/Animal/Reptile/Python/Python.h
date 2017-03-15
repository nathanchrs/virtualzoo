//Author : Alvin

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
    * @details Menciptakan seekor ular piton dengan posisi, berat,
    * dan kelakuan (buas atau jinak) yang ditentukan.
    * @param pos Posisi ular piton.
    * @param weight berat ular piton.
    * @param wild Kelakuan ular piton.
    */
  Python(const Point &pos, int weight, bool wild);

  /** @brief Melakukan interaksi dengan ular piton.
    * @return Experience yang dirasakan ketika berinteraksi dengan ular piton.
    */
  string Interact() const;

  /** @brief Mengembalikan pointer ke objek ular piton baru yang dibuat secara dinamis.
    * @return Pointer ke objek ular piton yang baru dibuat.
    */
  Animal *Clone() const {
    return new Python(*this);
  };
};


#endif //PYTHON_H
