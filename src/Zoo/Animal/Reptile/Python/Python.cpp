#include "Python.h"

Python::Python(const Point &pos, int weight, bool wild) : Reptile("Python"),
                                                          Carnivore(weight,
                                                                    0.20) {
  description = "Pythons are one of the largest snakes. Unlike many other"
      " snake species, pythons don’t produce venom. Pythons are constrictors."
      " They kill their prey by squeezing them until they stop breathing."
      " This ovipar animal has land as its habitat.";
  air_animal = false;
  land_animal = true;
  water_animal = false;
  position = pos;
  this->wild = wild;
  AddPrey("Owl");
  AddPrey("Parrot");
  AddPrey("Peacock");
  AddPrey("Pigeon");
  AddPrey("Gorilla");
  AddPrey("Leopard");
  AddPrey("Lion");
  AddPrey("Orangutan");
  AddPrey("Tiger");
  AddPrey("Cobra");
  AddPrey("Chameleon");
  AddPrey("Iguana");
  AddPrey("KomodoDragon");
}

string Python::Interact() const {
  return "The python is squeezing a chicken that the zookeper gave";
}
