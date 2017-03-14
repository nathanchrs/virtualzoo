#ifndef FRENCHANGELFISH_H
#define FRENCHANGELFISH_H

#include "../Pisces.h"
#include "../../Diet/Herbivore/Herbivore.h"

/** @class FrenchAngelFish
  * Kelas FrenchAngelFish yang merepesentasikan french angelfish.
  */
class FrenchAngelFish : public Pisces, public Herbivore {
public:

  /** @brief Constructor.
    * @details Menciptakan seekor french angelfish dengan posisi, berat,
    * dan kelakuan (buas atau jinak) yang ditentukan.
    * @param pos Posisi french angelfish.
    * @param weight berat french angelfish.
    * @param wild Kelakuan french angelfish.
    */
  FrenchAngelFish(const Point &pos, int weight, bool wild);

  /** @brief Melakukan interaksi dengan french angelfish.
    * @return Experience yang dirasakan ketika berinteraksi dengan french angelfish.
    */
  string Interact() const;

  /** @brief Mengembalikan pointer ke objek french angelfish baru yang dibuat secara dinamis.
    * @return Pointer ke objek french angelfish yang baru dibuat.
    */
  Animal *Clone() const {
    return new FrenchAngelFish(*this);
  };
};

#endif //FRENCHANGELFISH_H
