#include "Python.h"

Python::Python(int _weight) : Reptile("Python"), Carnivore(_weight, 0.20) {
    description = "Pythons are one of the largest snakes. Unlike many other snake species, pythons don’t produce venom."
                  " Pythons are constrictors. They kill their prey by squeezing them until they stop breathing."
                  " This ovipar animal has land as its habitat.";
}

string Python::interact() const {
    return "The python is squeezing a chicken that the zookeper gave";
}
