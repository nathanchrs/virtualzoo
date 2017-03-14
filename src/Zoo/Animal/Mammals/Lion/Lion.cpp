#include "Lion.h"

Lion::Lion(const Point &pos, int weight, bool wild) : Mammals("Lion"),
                                                      Carnivore(weight, 0.15) {
  description = "Lion is an animal from Africa. It is the second-largest living"
                " cat after the tiger with habit of sleeping during the day and"
                " active primarily at night. This vivipar animal has land as"
                " its habitat.";
  air_animal = false;
  land_animal = true;
  water_animal = false;
  position = pos;
  this->wild = wild;
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

string Lion::Interact() const {
  return "The lion is yawning";
}
