#include "KomodoDragon.h"

KomodoDragon::KomodoDragon(const Point &pos, int weight, bool wild) : Reptile(
    "KomodoDragon"), Carnivore(weight, 0.25) {
  description = "The komodo dragon is a large species of lizard found in the"
      " Indonesian islands of Komodo, Rinca, Flores, Gili Motang, and Padar."
      " It has been claimed that they have a venomous bite; there are two"
      " glands in the lower jaw which secrete several toxic proteins."
      " This ovipar animal has land as its habitat.";
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
  AddPrey("Lion");
  AddPrey("Orangutan");
  AddPrey("Tiger");
  AddPrey("Chameleon");
  AddPrey("Cobra");
  AddPrey("Iguana");
  AddPrey("Python");
}

string KomodoDragon::Interact() const {
  return "The komodo dragon is eating some beef that the zookeper gave";
}
