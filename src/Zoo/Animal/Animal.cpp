#include "Animal.h"

Animal::Animal(const string &name) : name(name) {}

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


