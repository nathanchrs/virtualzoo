#include "Python.h"

Python::Python(const Point& pos, int _weight, bool wild) : Reptile("Python"), Carnivore(_weight, 0.20) {
    description = "Pythons are one of the largest snakes. Unlike many other snake species, pythons don’t produce venom."
                  " Pythons are constrictors. They kill their prey by squeezing them until they stop breathing."
                  " This ovipar animal has land as its habitat.";
    airAnimal = false;
    landAnimal = true;
    waterAnimal = false;
    position = pos;
    this -> wild = wild;
    //TODO ListPrey
}

string Python::interact() const {
    return "The python is squeezing a chicken that the zookeper gave";
}
