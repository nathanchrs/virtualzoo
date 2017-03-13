#include "Lion.h"

Lion::Lion(const Point& pos, int _weight, bool wild) : Mammals("Lion"), Carnivore(_weight, 0.15) {
    description = "Lion is an animal from Africa. It is the second-largest living cat after the tiger with habit of"
                  " sleeping during the day and active primarily at night. This vivipar animal has land as its"
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
    AddPrey("Leopard");
    AddPrey("Orangutan");
    AddPrey("Tiger");
    AddPrey("Chameleon");
    AddPrey("Cobra");
    AddPrey("Iguana");
    AddPrey("KomodoDragon");
    AddPrey("Python");
}

string Lion::interact() const {
    return "The lion is yawning";
}
