#ifndef WILDCOBRA_H
#define WILDCOBRA_H


#include "../Reptile.h"
#include "../../Diet/Carnivore/Carnivore.h"
#include "../../Behaviour/WildAnimal/WildAnimal.h"

/** @class WildCobra
  * Kelas WildCobra yang merepesentasikan ular kobra yang buas.
  */
class WildCobra : public Reptile, public Carnivore, public WildAnimal{
public:
    /** @brief Constructor.
      * Menciptakan ular kobra yang buas beserta daftar mangsanya.
      */
    WildCobra(int _weight);

    /** @brief Melakukan interaksi dengan ular kobra yang buas.
      * @return Experience yang dirasakan ketika berinteraksi dengan ular kobra yang buas.
      */
    string interact() const;
};


#endif //WILDCOBRA_H
