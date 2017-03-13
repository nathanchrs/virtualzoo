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
    Barracuda(const Point& pos, int _weight, bool wild);

    /** @brief Melakukan interaksi dengan ikan barakuda.
      * @return Experience yang dirasakan ketika berinteraksi dengan ikan barakuda.
      */
    string interact() const;

    Animal* clone() const {
        return new Barracuda(*this);
    };
};

#endif //BARRACUDA_H
