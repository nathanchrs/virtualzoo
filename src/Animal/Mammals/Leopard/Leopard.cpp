#include "Leopard.h"

Leopard::Leopard(int _weight) : Mammals("Leopard"), Carnivore(_weight, 0.05) {
    description = "Leopard is an animal from Africa and Asia. It is one of the five 'big cats' with ability to adapt to"
                  " various habitats and could run at speeds of up to 58 kmph. This vivipar animal has land as its"
                  " habitat.";
}

string Leopard::interact() const {
    return "The leopard is sleeping with its family.";
}
