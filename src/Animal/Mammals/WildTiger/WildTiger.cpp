#include "WildTiger.h"

WildTiger::WildTiger(int _weight) : Mammals("WildTiger"), Carnivore(_weight, 0.20), WildAnimal(12) {
    description = "Tiger is an animal from Turkey through South and Southeast Asia. The tiger (Panthera tigris) is the"
            " largest cat species, most recognisable for their pattern of dark vertical stripes on reddish-orange"
            " fur with a lighter underside. The tiger is wild animal and mostly nocturnal. This vivipar animal"
            " has land as its habitat.";
    airAnimal = false;
    landAnimal = true;
    waterAnimal = false;
    AddPrey("Chameleon");
    AddPrey("Cobra");
    AddPrey("WildCobra");
    AddPrey("Iguana");
    AddPrey("KomodoDragon");
    AddPrey("Python");
    AddPrey("WildPython");
    AddPrey("Gorilla");
    AddPrey("Leopard");
    AddPrey("Lion");
    AddPrey("WildLion");
    AddPrey("Orangutan");
}

string WildTiger::interact() const {
    return "ROAR!";
}
