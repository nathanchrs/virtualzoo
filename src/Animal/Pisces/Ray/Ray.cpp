#include "Ray.h"

Ray::Ray(int _weight) : Pisces("Ray"), Carnivore(_weight) {
    description = "<Ray description>"; //TODO description
}

string Ray::interact() const {
    return "<Ray interaction>"; // TODO interaction
}
