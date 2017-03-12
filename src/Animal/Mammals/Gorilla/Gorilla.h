//
// Created by nim_13515004 on 11/03/17.
//

#ifndef GORILA_H
#define GORILA_H

#include "../Mammals.h"
#include "../../Diet/Omnivore/Omnivore.h"
#include "../../Behaviour/TameAnimal/TameAnimal.h"

/** @class Gorilla
  * Kelas Gorilla yang merepesentasikan gorilla.
  */
class Gorilla : public Mammals, public Omnivore, public TameAnimal {
public:

    Gorilla();

    /** @brief Constructor.
      * Menciptakan gorilla.
      */
    Gorilla(int _weight);

    /** @brief Melakukan interaksi dengan gorilla.
      * @return Experience yang dirasakan ketika berinteraksi dengan gorilla.
      */
    string interact() const;
};


#endif //GORILA_H
