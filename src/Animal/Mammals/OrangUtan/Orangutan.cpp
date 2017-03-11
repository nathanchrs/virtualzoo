//
// Created by nim_13515004 on 11/03/17.
//

#include "Orangutan.h"

/** @brief Constructor.
  * Menciptakan Orangutan.
  */
Orangutan::Orangutan() {
    name="Orangutan";
    description="Orangutan is an animal from Indonesia and Malaysia. It is one of the most intelligent primate that could use a variety of sophisticated tools and well known for its great learning abilities. This vivipar animal has land as its habitat.";
    wild=false;
    landAnimal=true;
    waterAnimal=false;
    airAnimal=false;
    reproduction="vivipar";
    //Position belum
}

/** @brief Melakukan interaksi dengan Orangutan.
  * @return Experience yang dirasakan ketika berinteraksi dengan Orangutan.
  */
string Orangutan::Interact() {
    return "The orangutan is hanging around the trees, picking every fruits and eating them.";
}