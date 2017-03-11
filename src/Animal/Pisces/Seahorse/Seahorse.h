#ifndef SEAHORSE_H
#define SEAHORSE_H


#include "../Pisces.h"
#include "../../Diet/Carnivore/Carnivore.h"

/** @class Seahorse
  * Kelas Seahorse yang merepesentasikan kuda laut.
  */
class Seahorse : public Pisces, public Carnivore{
public:
    /** @brief Constructor.
      * Menciptakan kuda laut.
      */
    Seahorse(int _weight);

    /** @brief Melakukan interaksi dengan kuda laut.
      * @return Experience yang dirasakan ketika berinteraksi dengan kuda laut.
      */
    string Interact();
};


#endif //SEAHORSE_H
