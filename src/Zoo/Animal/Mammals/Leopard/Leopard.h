#ifndef LEOPARD_H
#define LEOPARD_H

#include "../Mammals.h"
#include "../../Diet/Carnivore/Carnivore.h"

/** @class Leopard
  * Kelas Leopard yang merepesentasikan macan tutul.
  */
class Leopard : public Mammals, public Carnivore {
public:
    /** @brief Constructor.
      * Menciptakan macan tutul.
      */
    Leopard(const Point& pos, int _weight, bool wild);

    /** @brief Melakukan interaksi dengan macan tutul.
      * @return Experience yang dirasakan ketika berinteraksi dengan macan tutul.
      */
    string interact() const;

    Animal* clone() const {
        return new Leopard(*this);
    };
};

#endif //LEOPARD_H
