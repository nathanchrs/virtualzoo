#include "Lion.h"

Lion::Lion(int _weight) : Mammals("Lion"), Carnivore(_weight) {
    description = "Lion is an animal from Africa. It is the second-largest living cat after the tiger with habit of"
                  " sleeping during the day and active primarily at night. This vivipar animal has land as its"
                  " habitat.";
}

string Lion::interact() const {
    return "The lion is yawning.";
}
