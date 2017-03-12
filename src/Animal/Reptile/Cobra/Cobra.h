#ifndef COBRA_H
#define COBRA_H

#include "../Reptile.h"
#include "../../Diet/Carnivore/Carnivore.h"

/** @class Cobra
  * Kelas Cobra yang merepesentasikan ular kobra.
  */
class Cobra : public Reptile, public Carnivore{
public:
    /** @brief Constructor.
      * Menciptakan ular kobra.
      */
    Cobra(int _weight);

    /** @brief Melakukan interaksi dengan ular kobra.
      * @return Experience yang dirasakan ketika berinteraksi dengan ular kobra.
      */
    string interact() const;
};


#endif //COBRA_H
