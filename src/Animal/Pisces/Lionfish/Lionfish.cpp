#include "Lionfish.h"

Lionfish::Lionfish(int _weight) : Pisces("Lionfish"), Carnivore(_weight) {
    description = "Lionfish is an animal native to the Indo-Pacific. It is characterized by conspicuous warning coloration"
                  " and venomous spiky fin rays. This ovipar animal has water as its habitat.";
}

string Lionfish::interact() const {
    return "Whoa! I thought it was plant. It is lionfish!";
}
