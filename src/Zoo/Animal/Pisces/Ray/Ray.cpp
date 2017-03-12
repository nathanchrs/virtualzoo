#include "Ray.h"

Ray::Ray(int _weight) : Pisces("Ray"), Carnivore(_weight, 0.25) {
    description = "Ray is an animal lives on the sea floor. It is distinguished by their flattened bodies and"
                  " enlarged pectoral fins that are fused to the head. This ovipar animal has water as its habitat.";
    airAnimal = false;
    landAnimal = false;
    waterAnimal = true;
}

string Ray::interact() const {
    return "The ray is swimming as floating through the water.";
}