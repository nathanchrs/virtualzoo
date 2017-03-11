//
// Created by nim_13515004 on 11/03/17.
//

#ifndef TIGER_H
#define TIGER_H


#include "../Mammals.h"
#include "../../Diet/Carnivore/Carnivore.h"

/** @class Lion
  * Kelas Lion yang merepesentasikan Lion.
  */
class Tiger : public Mammals, public Carnivore {
public:
    /** @brief Constructor.
      * Menciptakan Tiger.
      */
    Tiger();

    /** @brief Melakukan interaksi dengan Tiger.
      * @return Experience yang dirasakan ketika berinteraksi dengan Tiger.
      */
    string Interact();
};


#endif //TIGER_H
