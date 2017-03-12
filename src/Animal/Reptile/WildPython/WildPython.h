#ifndef WILDPYTHON_H
#define WILDPYTHON_H

#include "../Reptile.h"
#include "../../Diet/Carnivore/Carnivore.h"
#include "../../Behaviour/WildAnimal/WildAnimal.h"

/** @class WildPython
  * Kelas WildPython yang merepesentasikan ular piton yang buas.
  */
class WildPython : public Reptile, public Carnivore, public WildAnimal{
    /** @brief Constructor.
         * Menciptakan ular piton yang buas.
         */
    Python(int _weight);

    /** @brief Melakukan interaksi dengan ular piton yang buas.
      * @return Experience yang dirasakan ketika berinteraksi dengan ular piton yang buas.
      */
    string interact() const;
};


#endif //WILDPYTHON_H
