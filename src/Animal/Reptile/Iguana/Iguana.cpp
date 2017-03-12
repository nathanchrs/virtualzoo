#include "Iguana.h"

Iguana::Iguana(int _weight) : Reptile("Iguana"), Carnivore(_weight) {
    description = "Iguanas are lizards identified by their stocky stature, the saggy skin on their throats and the "
                  "spines that protrude from their heads, necks, backs and tails. Iguanas live 15 to 20 years if cared for properly.\n"
                  "The native range of the green iguana extends from southern Mexico to central Brazil."
                  "This ovovivipar animal has land as its habitat.";
}

string Iguana::interact() const {
    return "The iguana is climbing a tree";
}
