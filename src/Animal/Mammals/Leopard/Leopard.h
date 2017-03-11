//
// Created by nim_13515004 on 11/03/17.
//

#ifndef LEOPARD_H
#define LEOPARD_H

#include "../Mammals.h"
#include "../../Diet/Carnivore/Carnivore.h"

/** @class Leopard
  * Kelas Leopard yang merepesentasikan Leopard.
  */
class Leopard : public Mammals, public Carnivore{
public:
    /** @brief Constructor.
      * Menciptakan Leopard.
      */
    Leopard();

    /** @brief Melakukan interaksi dengan Leopard.
      * @return Experience yang dirasakan ketika berinteraksi dengan Leopard.
      */
    string Interact();
};


#endif //LEOPARD_H
