//
// Created by nim_13515004 on 11/03/17.
//

#include "Lion.h"

/** @brief Constructor.
  * Menciptakan Lion.
  */
Lion::Lion() {
    name="Lion";
    description="Lion is an animal from Africa. It is the second-largest living cat after the tiger with habit of sleeping during the day and active primarily at night. This vivipar animal has land as its habitat.";
    wild=false;
    landAnimal=true;
    waterAnimal=false;
    airAnimal=false;
    reproduction="vivipar";
    //Position belum
}

/** @brief Melakukan interaksi dengan Lion.
  * @return Experience yang dirasakan ketika berinteraksi dengan Lion.
  */
string Lion::Interact() {
    return "The lion is yawning."
}