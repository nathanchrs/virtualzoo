#ifndef COBRA_H
#define COBRA_H

#include "../Reptile.h"
#include "../../Diet/Carnivore/Carnivore.h"

/** @class Cobra
  * Kelas Cobra yang merepesentasikan ular kobra.
  */
class Cobra : public Reptile, public Carnivore {
public:
  /** @brief Constructor.
    * @details Menciptakan seekor ular kobra dengan posisi, berat,
    * dan kelakuan (buas atau jinak) yang ditentukan.
    * @param pos Posisi ular kobra.
    * @param weight berat ular kobra.
    * @param wild Kelakuan ular kobra.
    */
  Cobra(const Point &pos, int weight, bool wild);

  /** @brief Melakukan interaksi dengan ular kobra.
    * @return Experience yang dirasakan ketika berinteraksi dengan ular kobra.
    */
  string Interact() const;

  /** @brief Mengembalikan pointer ke objek ular kobra baru yang dibuat secara dinamis.
    * @return Pointer ke objek ular kobra yang baru dibuat.
    */
  Animal *Clone() const {
    return new Cobra(*this);
  };
};


#endif //COBRA_H
