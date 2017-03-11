//
// Created by nim_13515004 on 11/03/17.
//

#ifndef ORANGUTAN_H
#define ORANGUTAN_H

#include "../Mammals.h"
#include "../../Diet/Omnivore/Omnivore.h"

/** @class Orangutan
  * Kelas Orangutan yang merepesentasikan Orangutan.
  */
class Orangutan : public Mammals, public Omnivore {
public:
    /** @brief Constructor.
      * Menciptakan Orangutan.
      */
    Orangutan();

    /** @brief Melakukan interaksi dengan Orangutan.
      * @return Experience yang dirasakan ketika berinteraksi dengan Orangutan.
      */
    string Interact();
};

#endif //ORANGUTAN_H