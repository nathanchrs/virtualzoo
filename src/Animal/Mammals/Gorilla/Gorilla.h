//
// Created by nim_13515004 on 11/03/17.
//

#ifndef GORILA_H
#define GORILA_H

#include "../Mammals.h"
#include "../../Diet/Omnivore/Omnivore.h"

/** @class Gorilla
  * Kelas Gorilla yang merepesentasikan Gorilla.
  */
class Gorilla : public Mammals, public Omnivore {
public:
    /** @brief Constructor.
      * Menciptakan Gorilla.
      */
    Gorilla();

    /** @brief Melakukan interaksi dengan Gorilla.
      * @return Experience yang dirasakan ketika berinteraksi dengan Gorilla.
      */
    string Interact();
};


#endif //GORILA_H
