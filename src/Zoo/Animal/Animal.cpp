#include "Animal.h"

string Animal::getName() const {
    return name;
}

string Animal::getDescription() const {
    return description;
}


bool Animal::isAirAnimal() {
    return airAnimal;
}

bool Animal::isLandAnimal() {
    return landAnimal;
}

bool Animal::isWaterAnimal() {
    return waterAnimal;
}

Point Animal::getPosition() const {
    return position;
}

void Animal::setPosition(const Point &position) {
    Animal::position = position;
}

Animal::Reproduction Animal::getReproduction() const {
    return reproduction;
}

Animal::SkinType Animal::getSkinType() const {
    return skinType;
}

bool Animal::isValidHabitat(Habitat::HabitatType habitatType) const {
    switch (habitatType) {
        case Habitat::AirHabitat:
            return airAnimal;
        case Habitat::LandHabitat:
            return landAnimal;
        case Habitat::WaterHabitat:
            return waterAnimal;
    }
}

bool Animal::IsWild() const {
    return wild;
}

void Animal::AddPrey(const string &prey_name) {
    prey_list.PushBack(prey_name);
}

bool Animal::isPrey(const string &prey_name) const {
    if (prey_list.Find(prey_name) >= 0) {
        return true;
    }
    return false;
}
