//Author : Agus

#include "cobra.h"

Cobra::Cobra(const Point &pos, int weight, bool wild) : Reptile("Cobra"),
                                                        Carnivore(weight,
                                                                  0.15) {
  description = "Cobras, with their threatening hoods and intimidating "
                " postures, are some of the most iconic"
                " snakes on Earth. Their elegance, prideful stance"
                " and venomous bite have made them both respected and"
                " feared. Cobras occur throughout Africa,"
                " the Middle East, India, Southeast Asia, and Indonesia."
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
  AddPrey("Chameleon");
  AddPrey("Iguana");
  AddPrey("KomodoDragon");
  AddPrey("Python");
}

string Cobra::Interact() const {
  return "The cobra wag its tail and make some sizzle sound like 'Ssssttt!'";
}
