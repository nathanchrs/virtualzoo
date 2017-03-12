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
      * Menciptakan ikan barakuda.
      */
    Barracuda(int _weight);

    /** @brief Melakukan interaksi dengan ikan barakuda.
      * @return Experience yang dirasakan ketika berinteraksi dengan ikan barakuda.
      */
    string interact() const;
};

#endif //BARRACUDA_H
