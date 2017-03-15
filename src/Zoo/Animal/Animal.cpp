//Author : Agus, Alvin

#include "Animal.h"

bool Animal::IsValidHabitat(Habitat::HabitatType habitat_type) const {
  switch (habitat_type) {
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
  return prey_list.Find(prey_name) >= 0;
}
