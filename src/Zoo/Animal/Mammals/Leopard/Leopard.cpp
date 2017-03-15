//Author : Agus

#include "Leopard.h"

Leopard::Leopard(const Point &pos, int weight, bool wild) : Mammals("Leopard"),
                                                            Carnivore(weight,
                                                                      0.05) {
  description = "Leopard is an animal from Africa and Asia. It is one of "
                " five 'big cats' with ability to adapt to various habitats and"
                " could run at speeds of up to 58 kmph. This vivipar animal has"
                " land as its habitat.";
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
  AddPrey("Lion");
  AddPrey("Orangutan");
  AddPrey("Tiger");
  AddPrey("Chameleon");
  AddPrey("Cobra");
  AddPrey("Iguana");
  AddPrey("KomodoDragon");
  AddPrey("Python");
}

string Leopard::Interact() const {
  return "The leopard is sleeping with its family";
}
