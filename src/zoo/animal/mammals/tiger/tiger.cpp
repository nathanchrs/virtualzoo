//Author : Agus

#include "tiger.h"

Tiger::Tiger(const Point &pos, int weight, bool wild) : Mammals("Tiger"),
                                                        Carnivore(weight,
                                                                  0.10) {
  description = "Tiger is an animal from Turkey through South and"
                " Southeast Asia. The tiger (Panthera tigris) is the"
                " largest cat species, most recognisable for their pattern"
                " of dark vertical stripes on reddish-orange"
                " fur with a lighter underside. The tiger is wild animal"
                " and mostly nocturnal. This vivipar animal"
                " has land as its habitat.";
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
  AddPrey("Chameleon");
  AddPrey("Cobra");
  AddPrey("Iguana");
  AddPrey("KomodoDragon");
  AddPrey("Python");
}

string Tiger::Interact() const {
  return "The tiger is roaring. The sound that tiger produce is rawwrrrrr!";
}
