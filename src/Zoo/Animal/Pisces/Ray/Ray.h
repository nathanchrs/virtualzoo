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
    Ray(int _weight);

    /** @brief Melakukan interaksi dengan ikan pari.
      * @return Experience yang dirasakan ketika berinteraksi dengan ikan pari.
      */
    string interact() const;

    Animal* clone() const {
        return new Ray(*this);
    };
};


#endif //RAY_H
