#ifndef FRENCHANGELFISH_H
#define FRENCHANGELFISH_H

#include "../Pisces.h"
#include "../../Diet/Herbivore/Herbivore.h"
#include "../../Behaviour/TameAnimal/TameAnimal.h"

/** @class FrenchAngelFish
  * Kelas FrenchAngelFish yang merepesentasikan french angelfish.
  */
class FrenchAngelFish : public Pisces, public Herbivore, public TameAnimal {
public:
    /** @brief Constructor.
      * Menciptakan french angelfish.
      */
    FrenchAngelFish(int _weight);

    /** @brief Melakukan interaksi dengan french angelfish.
      * @return Experience yang dirasakan ketika berinteraksi dengan french angelfish.
      */
    string interact() const;
};


#endif //FRENCHANGELFISH_H
