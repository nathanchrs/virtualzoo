#include "Leopard.h"

Leopard::Leopard(const Point& pos, int _weight, bool wild) : Mammals("Leopard"), Carnivore(_weight, 0.05) {
    description = "Leopard is an animal from Africa and Asia. It is one of the five 'big cats' with ability to adapt to"
                  " various habitats and could run at speeds of up to 58 kmph. This vivipar animal has land as its"
                  " habitat.";
    airAnimal = false;
    landAnimal = true;
    waterAnimal = false;
    position = pos;
    this -> wild = wild;
    //TODO ListPrey
}

string Leopard::interact() const {
    return "The leopard is sleeping with its family";
}
