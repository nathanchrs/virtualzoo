//
// Created by alvin on 12/03/17.
//

#include "WildEagle.h"

WildEagle::WildEagle(int _weight) : Aves("WildEagle"), Carnivore(_weight, 0.50), WildAnimal(18) {
    description = "The eagle is a (generally) large sized bird of prey meaning that the eagle is one of the most "
            "dominant predators in the sky. Eagles are most commonly found in the Northern Hemisphere including Europe, "
            "Asia and North America. Eagles are also found on the African continent. "
            "This ovipar animal has land and air as its habitat";
    airAnimal = true;
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
    AddPrey("Tiger");
    AddPrey("WildTiger");
    AddPrey("Owl");
    AddPrey("Parrot");
    AddPrey("Peacock");
    AddPrey("Pigeon");
}

string WildEagle::interact() const {
    return "AKK!";
}