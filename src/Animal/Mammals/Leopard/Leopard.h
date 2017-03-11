//
// Created by nim_13515004 on 11/03/17.
//

#ifndef LEOPARD_H
#define LEOPARD_H

#include "../Mammals.h"
#include "../../Diet/Carnivore/Carnivore.h"

/** @class Leopard
  * Kelas Leopard yang merepesentasikan macan tutul.
  */
class Leopard : public Mammals, public Carnivore{
public:
    /** @brief Constructor.
      * Menciptakan macan tutul.
      */
    Leopard(int _weight);

    /** @brief Melakukan interaksi dengan macan tutul.
      * @return Experience yang dirasakan ketika berinteraksi dengan macan tutul.
      */
    string Interact();
};


#endif //LEOPARD_H
