//
// Created by nim_13515004 on 11/03/17.
//

#include "Leopard.h"

/** @brief Constructor.
  * Menciptakan Leopard.
  */
Leopard::Leopard() {
    name="Leopard";
    description="Leopard is an animal from Africa and Asia. It is one of the five 'big cats' with ability to adapt various habitats and could run at speeds of up to 58 kmph. This vivipar animal has land as its habitat.";
    wild=false;
    landAnimal=true;
    waterAnimal=false;
    airAnimal=false;
    reproduction="vivipar";
    //Position belum
}

/** @brief Melakukan interaksi dengan Leopard.
  * @return Experience yang dirasakan ketika berinteraksi dengan Leopard.
  */
string Leopard::Interact() {
    return "The leopard is sleeping with their family.";
}