//Author : Alvin

#include "eagle.h"

Eagle::Eagle(const Point &pos, int weight, bool wild) : Aves("Eagle"),
                                                        Carnivore(weight,
                                                                  0.25) {
  description = "The eagle is a (generally) large sized bird of prey meaning"
      " that the eagle is one of the most dominant predators in the"
      " sky. Eagles are most commonly found in the Northern"
      " Hemisphere including Europe, Asia and North America."
      " Eagles are also found on the African continent."
      " This ovipar animal has land and air as its habitat";
  air_animal = true;
  land_animal = true;
  water_animal = false;
  position = pos;
  this->wild = wild;
  AddPrey("Owl");
  AddPrey("Parrot");
  AddPrey("Peacock");
  AddPrey("Pigeon");
  AddPrey("Chameleon");
  AddPrey("Cobra");
  AddPrey("Iguana");
  AddPrey("Python");
}

string Eagle::Interact() const {
  return "The eagle is eating its food that the zoo keeper gave";
}

