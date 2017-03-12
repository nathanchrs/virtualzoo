//
// Created by alvin on 12/03/17.
//

#ifndef WILDEAGLE_H
#define WILDEAGLE_H

#include "../Aves.h"
#include "../../Diet/Carnivore/Carnivore.h"
#include "../../Behaviour/WildAnimal/WildAnimal.h"

/** @class WildEagle
  * Kelas WildEagle yang merepesentasikan elang yang buas.
  */
class WildEagle : public Aves, public Carnivore, public WildAnimal {
public:
    /** @brief Constructor.
      * Menciptakan elang yang buas beserta daftar mangsanya.
      */
    WildEagle(int _weight);

    /** @brief Melakukan interaksi dengan elang yang buas.
      * @return Experience yang dirasakan ketika berinteraksi dengan elang yang buas.
      */
    string interact() const;
};


#endif //EAGLE_H
