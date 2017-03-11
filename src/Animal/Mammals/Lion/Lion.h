//
// Created by nim_13515004 on 11/03/17.
//

#ifndef LION_H
#define LION_H


#include "../Mammals.h"
#include "../../Diet/Carnivore/Carnivore.h"

/** @class Lion
  * Kelas Lion yang merepesentasikan singa.
  */
class Lion : public Mammals, public Carnivore{
public:
    /** @brief Constructor.
      * Menciptakan singa.
      */
    Lion(int _weight);

    /** @brief Melakukan interaksi dengan Lion.
      * @return Experience yang dirasakan ketika berinteraksi dengan singa.
      */
    string Interact();
};


#endif //LION_H
