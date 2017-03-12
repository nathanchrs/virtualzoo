#ifndef RAY_H
#define RAY_H

#include "../Pisces.h"
#include "../../Diet/Carnivore/Carnivore.h"
#include "../../Behaviour/TameAnimal/TameAnimal.h"

/** @class Ray
  * Kelas Ray yang merepesentasikan ikan pari.
  */
class Ray : public Pisces, public Carnivore, public TameAnimal{
public:
    /** @brief Constructor.
      * Menciptakan ikan pari.
      */
    Ray(int _weight);

    /** @brief Melakukan interaksi dengan ikan pari.
      * @return Experience yang dirasakan ketika berinteraksi dengan ikan pari.
      */
    string interact() const;
};


#endif //RAY_H
