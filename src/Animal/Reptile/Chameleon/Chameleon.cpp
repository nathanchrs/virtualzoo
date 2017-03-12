#include "Chameleon.h"

Chameleon::Chameleon(int _weight) : Reptile("Chameleon"), Carnivore(_weight, 0.05) {
    description = "The chameleon are a distinctive and highly specialized clade of Old World lizards."
                  " Chameleons primarily live in the mainland of sub-Saharan Africa and on the island of Madagascar."
                  " These species come in a range of colors, and many species have the ability to change color."
                  " This ovipar animal has land as its habitat.";
}

string Chameleon::interact() const {
    return "The chameleon is changing its color and its color become like leaf.";
}
