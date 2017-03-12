#ifndef PYTHON_H
#define PYTHON_H

#include "../Reptile.h"
#include "../../Diet/Carnivore/Carnivore.h"
#include "../../Behaviour/TameAnimal/TameAnimal.h"

/** @class Python
  * Kelas Python yang merepesentasikan ular piton.
  */
class Python : public Reptile, public Carnivore, public TameAnimal {
public:
    /** @brief Constructor.
      * Menciptakan ular piton.
      */
    Python(int _weight);

    /** @brief Melakukan interaksi dengan ular piton.
      * @return Experience yang dirasakan ketika berinteraksi dengan ular piton.
      */
    string interact() const;
};


#endif //PYTHON_H
