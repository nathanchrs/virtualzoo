//
// Created by nim_13515004 on 11/03/17.
//

#include "Tiger.h"

Tiger::Tiger() {
    name = "Tiger";
    description = "Tiger is an animal from Turkey through South and Southeast Asia. The tiger (Panthera tigris) is the largest cat species, most recognisable for their pattern of dark vertical stripes on reddish-orange fur with a lighter underside. The tiger is wild animal and mostly nocturnal. This vivipar animal has land as its habitat.";
    wild = false;
    landAnimal = true;
    waterAnimal = false;
    airAnimal = false;
    reproduction = "vivipar";
    //Position belum
}

string Tiger::Interact() {
    return ("The tiger is roaring. The sound that tiger produce is rawwrrrrr!");
}