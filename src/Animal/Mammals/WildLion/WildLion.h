#ifndef WILDLION_H
#define WILDLION_H

#include "../Mammals.h"
#include "../../Diet/Carnivore/Carnivore.h"
#include "../../Behaviour/WildAnimal/WildAnimal.h"

/** @class WildLion
  * Kelas WildLion yang merepesentasikan singa yang buas.
  */
class WildLion : public Mammals, public Carnivore, public WildAnimal{
public:
    /** @brief Constructor.
      * Menciptakan singa yang buas beserta daftar mangsanya.
      */
    WildLion(int _weight);

    /** @brief Melakukan interaksi dengan singa yang buas.
      * @return Experience yang dirasakan ketika berinteraksi dengan singa yang buas.
      */
    string interact() const;
};


#endif //WILDLION_H
