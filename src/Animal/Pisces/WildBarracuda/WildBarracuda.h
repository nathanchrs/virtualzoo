//
// Created by alvin on 12/03/17.
//

#ifndef WILDBARRACUDA_H
#define WILDBARRACUDA_H

#include "../Pisces.h"
#include "../../Diet/Carnivore/Carnivore.h"
#include "../../Behaviour/WildAnimal/WildAnimal.h"

/** @class WildBarracuda
  * Kelas WildBarracuda yang merepesentasikan ikan barakuda yang buas.
  */
class WildBarracuda : public Pisces, public Carnivore, public WildAnimal {
public:
    /** @brief Constructor.
      * Menciptakan ikan barakuda yang buas beserta mangsanya.
      */
    WildBarracuda(int _weight);

    /** @brief Melakukan interaksi dengan ikan barakuda yang buas.
      * @return Experience yang dirasakan ketika berinteraksi dengan ikan barakuda yang buas.
      */
    string interact() const;
};

#endif //WILDBARRACUDA_H
