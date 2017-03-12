#include "Iguana.h"

Iguana::Iguana(int _weight) : Reptile("Iguana"), Omnivore(_weight, 0.10) {
    description = "Iguanas are lizards identified by their stocky stature, the saggy skin on their throats and the"
                  " spines that protrude from their heads, necks, backs and tails. Iguanas live 15 to 20 years if cared for properly."
                  " The native range of the green iguana extends from southern Mexico to central Brazil."
                  " This ovovivipar animal has land as its habitat.";
    airAnimal = false;
    landAnimal = true;
    waterAnimal = false;
}

string Iguana::interact() const {
    return "The iguana is climbing a tree";
}
