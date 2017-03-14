#include "Animal.h"

bool Animal::IsValidHabitat(Habitat::HabitatType habitatType) const {
  switch (habitatType) {
    case Habitat::AirHabitat:
      return air_animal;
    case Habitat::LandHabitat:
      return land_animal;
    case Habitat::WaterHabitat:
      return water_animal;
  }
}

void Animal::AddPrey(const string &prey_name) {
  prey_list.PushBack(prey_name);
}

bool Animal::IsPrey(const string &prey_name) const {
  if (prey_list.Find(prey_name) >= 0) {
    return true;
  }
  return false;
}
