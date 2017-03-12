#include "Parrot.h"

Parrot::Parrot(int _weight) : Aves("Parrot"), Herbivore(_weight, 0.05) {
    description = "Parrot is an animal that can be found in South America and Australasia."
                  "Parrots are intelligent birds. They have relatively large brains, they can learn, and they can use"
                  " simple tools. This ovipar animal has land and air as its habitat";
}

string Parrot::interact() const {
    return "Parrot is imitate someone voice that said 'I'm handsome!'";
}