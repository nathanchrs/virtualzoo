#include "Tiger.h"

Tiger::Tiger(int _weight) : Mammals("Tiger"), Carnivore(_weight, 0.10) {
    description = "Tiger is an animal from Turkey through South and Southeast Asia. The tiger (Panthera tigris) is the"
                  " largest cat species, most recognisable for their pattern of dark vertical stripes on reddish-orange"
                  " fur with a lighter underside. The tiger is wild animal and mostly nocturnal. This vivipar animal"
                  " has land as its habitat.";
    airAnimal = false;
    landAnimal = true;
    waterAnimal = false;
}

string Tiger::interact() const {
    return "The tiger is roaring. The sound that tiger produce is rawwrrrrr!";
}