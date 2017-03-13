#include "Lion.h"

Lion::Lion(const Point& pos, int _weight, bool wild) : Mammals("Lion"), Carnivore(_weight, 0.15) {
    description = "Lion is an animal from Africa. It is the second-largest living cat after the tiger with habit of"
                  " sleeping during the day and active primarily at night. This vivipar animal has land as its"
                  " habitat.";
    airAnimal = false;
    landAnimal = true;
    waterAnimal = false;
    position = pos;
    this -> wild = wild;
    //TODO ListPrey
}

string Lion::interact() const {
    return "The lion is yawning";
}
