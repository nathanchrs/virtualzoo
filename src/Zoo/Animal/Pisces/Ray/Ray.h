#ifndef RAY_H
#define RAY_H

#include "../Pisces.h"
#include "../../Diet/Carnivore/Carnivore.h"

/** @class Ray
  * Kelas Ray yang merepesentasikan ikan pari.
  */
class Ray : public Pisces, public Carnivore {
public:
  /** @brief Constructor.
    * Menciptakan ikan pari.
    */
  Ray(const Point &pos, int weight, bool wild);

  /** @brief Melakukan interaksi dengan ikan pari.
    * @return Experience yang dirasakan ketika berinteraksi dengan ikan pari.
    */
  string Interact() const;

  /** @brief Mengembalikan pointer ke objek baru yang dibuat secara dinamis.
    * @return Pointer ke objek yang baru dibuat.
    */
  Animal *Clone() const {
    return new Ray(*this);
  };
};
#endif //RAY_H
