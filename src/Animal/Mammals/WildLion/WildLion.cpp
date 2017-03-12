#include "WildLion.h"

WildLion::WildLion(int _weight) : Mammals("WildLion"), Carnivore(_weight, 0.30), WildAnimal(12) {
    description = "Lion is an animal from Africa. It is the second-largest living cat after the tiger with habit of"
            " sleeping during the day and active primarily at night. This vivipar animal has land as its"
            " habitat.";
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
    AddPrey("Orangutan");
    AddPrey("Tiger");
    AddPrey("WildTiger");
}

string WildLion::interact() const {
    return "ROAR!";
}
