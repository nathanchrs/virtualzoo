//
// Created by nim_13515004 on 11/03/17.
//

#ifndef TIGER_H
#define TIGER_H


#include "../Mammals.h"
#include "../../Diet/Carnivore/Carnivore.h"

/** @class Tiger
  * Kelas Tiger yang merepesentasikan harimau.
  */
class Tiger : public Mammals, public Carnivore {
public:
    /** @brief Constructor.
      * Menciptakan harimau.
      */
    Tiger(int _weight);

    /** @brief Melakukan interaksi dengan harimau.
      * @return Experience yang dirasakan ketika berinteraksi dengan harimau.
      */
    string Interact();
};


#endif //TIGER_H
