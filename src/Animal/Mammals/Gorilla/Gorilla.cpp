//
// Created by nim_13515004 on 11/03/17.
//

#include "Gorilla.h"

/** @brief Constructor.
  * Menciptakan Gorilla.
  */
Gorilla::Gorilla() {
    name="Gorilla";
    description="Gorilla is an animal from Africa. It is the largest living primate and the closest living relatives to human. This vivipar animal has land as its habitat.";
    wild=false;
    landAnimal=true;
    waterAnimal=false;
    airAnimal=false;
    //Position belum
}

/** @brief Melakukan interaksi dengan Gorilla.
  * @return Experience yang dirasakan ketika berinteraksi dengan Gorilla.
  */
string Gorilla::Interact() {
    return "The Gorilla is looking happy as it is telling you to play with him.";
}