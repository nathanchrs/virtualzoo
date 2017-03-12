#include "Python.h"

Python::Python(int _weight) : Reptile("Python"), Carnivore(_weight) {
    description = "<Python description>"; //TODO description
}

string Python::interact() const {
    return "<Python interaction>"; // TODO interaction
}
