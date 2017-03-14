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
    * Menciptakan french angelfish.
    */
  FrenchAngelFish(const Point &pos, int weight, bool wild);

  /** @brief Melakukan interaksi dengan french angelfish.
    * @return Experience yang dirasakan ketika berinteraksi dengan french angelfish.
    */
  string Interact() const;

  /** @brief Mengembalikan pointer ke objek baru yang dibuat secara dinamis.
    * @return Pointer ke objek yang baru dibuat.
    */
  Animal *Clone() const {
    return new FrenchAngelFish(*this);
  };
};

#endif //FRENCHANGELFISH_H
