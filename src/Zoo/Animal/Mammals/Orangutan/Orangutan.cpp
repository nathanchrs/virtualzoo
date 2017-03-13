#include "Orangutan.h"

Orangutan::Orangutan(int _weight) : Mammals("Orangutan"), Omnivore(_weight, 0.20) {
    description = "Orangutan is an animal from Indonesia and Malaysia. It is one of the most intelligent primate that"
                  " could use a variety of sophisticated tools and well known for its great learning abilities."
                  " This vivipar animal has land as its habitat.";
    airAnimal = false;
    landAnimal = true;
    waterAnimal = false;
}

string Orangutan::interact() const {
    return "The orangutan is hanging around the trees, picking every fruits and eating them.";
}