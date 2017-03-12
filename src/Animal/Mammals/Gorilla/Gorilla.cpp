#include "Gorilla.h"

Gorilla::Gorilla(int _weight) : Mammals("Gorilla"), Omnivore(_weight, 0.25) {
    description = "Gorilla is an animal from Africa. It is the largest living primate and the closest living relatives"
                  " to humans. This vivipar animal has land as its habitat.";
}

string Gorilla::interact() const {
    return "The gorilla is playing with its toy.";
}
