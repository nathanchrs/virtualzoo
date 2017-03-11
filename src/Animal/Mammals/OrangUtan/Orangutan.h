//
// Created by nim_13515004 on 11/03/17.
//

#ifndef ORANGUTAN_H
#define ORANGUTAN_H

#include "../Mammals.h"
#include "../../Diet/Omnivore/Omnivore.h"

/** @class Orangutan
  * Kelas Orangutan yang merepesentasikan orangutan.
  */
class Orangutan : public Mammals, public Omnivore {
public:
    /** @brief Constructor.
      * Menciptakan orangutan.
      */
    Orangutan(int _weight);

    /** @brief Melakukan interaksi dengan orangutan.
      * @return Experience yang dirasakan ketika berinteraksi dengan orangutan.
      */
    string Interact();
};

#endif //ORANGUTAN_H
