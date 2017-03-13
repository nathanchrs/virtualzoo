#include "Leopard.h"

Leopard::Leopard(const Point& pos, int _weight, bool wild) : Mammals("Leopard"), Carnivore(_weight, 0.05) {
    description = "Leopard is an animal from Africa and Asia. It is one of the five 'big cats' with ability to adapt to"
                  " various habitats and could run at speeds of up to 58 kmph. This vivipar animal has land as its"
                  " habitat.";
    airAnimal = false;
    landAnimal = true;
    waterAnimal = false;
    position = pos;
    this -> wild = wild;
    AddPrey("Eagle");
    AddPrey("Owl");
    AddPrey("Parrot");
    AddPrey("Peacock");
    AddPrey("Pigeon");
    AddPrey("Gorilla");
    AddPrey("Lion");
    AddPrey("Orangutan");
    AddPrey("Tiger");
    AddPrey("Chameleon");
    AddPrey("Cobra");
    AddPrey("Iguana");
    AddPrey("KomodoDragon");
    AddPrey("Python");
}

string Leopard::interact() const {
    return "The leopard is sleeping with its family";
}
