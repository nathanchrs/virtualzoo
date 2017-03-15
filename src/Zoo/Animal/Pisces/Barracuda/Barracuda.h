//Author : Agus

#ifndef BARRACUDA_H
#define BARRACUDA_H

#include "../Pisces.h"
#include "../../Diet/Carnivore/Carnivore.h"

/** @class Barracuda
  * Kelas Barracuda yang merepesentasikan ikan barakuda.
  */
class Barracuda : public Pisces, public Carnivore {
public:
  /** @brief Constructor.
    * @details Menciptakan seekor barakuda dengan posisi, berat,
    * dan kelakuan (buas atau jinak) yang ditentukan.
    * @param pos Posisi barakuda.
    * @param weight berat barakuda.
    * @param wild Kelakuan barakuda.
    */
  Barracuda(const Point &pos, int weight, bool wild);

  /** @brief Melakukan interaksi dengan ikan barakuda.
    * @return Experience yang dirasakan ketika berinteraksi dengan ikan barakuda
    */
  string Interact() const;

  /** @brief Mengembalikan pointer ke objek barukuda baru yang dibuat secara dinamis.
    * @return Pointer ke objek barukuda yang baru dibuat.
    */
  Animal *Clone() const {
    return new Barracuda(*this);
  };
};

#endif //BARRACUDA_H
