#include "WildPython.h"

WildPython::Python(int _weight) : Reptile("WildPython"), Carnivore(_weight, 0.40), WildAnimal(12) {
    description = "Pythons are one of the largest snakes. Unlike many other snake species, pythons don’t produce venom."
            " Pythons are constrictors. They kill their prey by squeezing them until they stop breathing."
            " This ovipar animal has land as its habitat.";
    airAnimal = false;
    landAnimal = true;
    waterAnimal = false;
    AddPrey("Chameleon");
    AddPrey("Cobra");
    AddPrey("WildCobra");
    AddPrey("Iguana");
    AddPrey("KomodoDragon");
    AddPrey("Gorilla");
    AddPrey("Leopard");
    AddPrey("Lion");
    AddPrey("WildLion");
    AddPrey("Orangutan");
    AddPrey("Tiger");
    AddPrey("WildTiger");
}

string WildPython::interact() const {
    return "SHAAHH!";
}
