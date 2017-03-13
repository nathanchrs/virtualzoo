//
// Created by nim_13515004 on 11/03/17.
//

#ifndef GORILA_H
#define GORILA_H

#include "../Mammals.h"
#include "../../Diet/Omnivore/Omnivore.h"

/** @class Gorilla
  * Kelas Gorilla yang merepesentasikan gorilla.
  */
class Gorilla : public Mammals, public Omnivore {
public:

    /** @brief Constructor.
      * Menciptakan gorilla.
      */
    Gorilla(const Point& pos, int _weight, bool wild);

    /** @brief Melakukan interaksi dengan gorilla.
      * @return Experience yang dirasakan ketika berinteraksi dengan gorilla.
      */
    string interact() const;

    Animal* clone() const {
        return new Gorilla(*this);
    };
};


#endif //GORILA_H
