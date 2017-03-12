#include "WildCobra.h"

WildCobra::WildCobra(int _weight) : Reptile("WildCobra"), Carnivore(_weight, 0.30), WildAnimal(12) {
    description = "Cobras, with their threatening hoods and intimidating upright postures, are some of the most iconic"
            " snakes on Earth. Their elegance, prideful stance and venomous bite have made them both respected and"
            " feared. Cobras occur throughout Africa, the Middle East, India, Southeast Asia, and Indonesia."
            " This ovipar animal has land as its habitat.";
    airAnimal = false;
    landAnimal = true;
    waterAnimal = false;
    AddPrey("Chameleon");
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
}

string WildCobra::interact() const {
    return "SSHHH!";
}
