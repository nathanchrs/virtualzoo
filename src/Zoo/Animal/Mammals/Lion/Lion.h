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
    * @details Menciptakan seekor singa dengan posisi, berat,
    * dan kelakuan (buas atau jinak) yang ditentukan.
    * @param pos Posisi singa.
    * @param weight berat singa.
    * @param wild Kelakuan singa.
    */
  Lion(const Point &pos, int weight, bool wild);

  /** @brief Melakukan interaksi dengan singa.
    * @return Experience yang dirasakan ketika berinteraksi dengan singa.
    */
  string Interact() const;

  /** @brief Mengembalikan pointer ke objek singa baru yang dibuat secara dinamis.
    * @return Pointer ke objek singa yang baru dibuat.
    */
  Animal *Clone() const {
    return new Lion(*this);
  };
};


#endif //LION_H
