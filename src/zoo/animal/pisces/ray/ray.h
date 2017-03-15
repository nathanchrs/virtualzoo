//Author : Agus

#ifndef RAY_H
#define RAY_H

#include "../pisces.h"
#include "../../diet/carnivore/carnivore.h"

/** @class Ray
  * Kelas Ray yang merepesentasikan ikan pari.
  */
class Ray : public Pisces, public Carnivore {
public:
  /** @brief Constructor.
    * @details Menciptakan seekor ikan pari dengan posisi, berat,
    * dan kelakuan (buas atau jinak) yang ditentukan.
    * @param pos Posisi ikan pari.
    * @param weight berat ikan pari.
    * @param wild Kelakuan ikan pari.
    */
  Ray(const Point &pos, int weight, bool wild);

  /** @brief Melakukan interaksi dengan ikan pari.
    * @return Experience yang dirasakan ketika berinteraksi dengan ikan pari.
    */
  string Interact() const;

  /** @brief Mengembalikan pointer ke objek ikan pari baru yang dibuat secara dinamis.
    * @return Pointer ke objek ikan pari yang baru dibuat.
    */
  Animal *Clone() const {
    return new Ray(*this);
  };
};
#endif //RAY_H
