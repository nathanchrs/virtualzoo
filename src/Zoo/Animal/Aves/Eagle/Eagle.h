#ifndef EAGLE_H
#define EAGLE_H

#include "../Aves.h"
#include "../../Diet/Carnivore/Carnivore.h"

/** @class Eagle
  * Kelas Eagle yang merepesentasikan elang.
  */
class Eagle : public Aves, public Carnivore {
public:
    /** @brief Constructor.
      * Menciptakan elang.
      */
    Eagle(int _weight);

    /** @brief Melakukan interaksi dengan elang.
      * @return Experience yang dirasakan ketika berinteraksi dengan elang.
      */
    string interact() const;

    Animal* clone() const {
        return new Eagle(*this);
    };
};


#endif //EAGLE_H
