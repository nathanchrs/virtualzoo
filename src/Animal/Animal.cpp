#include "Animal.h"

Animal::Animal(const string &name) : name(name) {}

string Animal::getName() const {
    return name;
}

void Animal::setName(const string &name) {
    Animal::name = name;
}

string Animal::getDescription() const {
    return description;
}

void Animal::setDescription(const string &description) {
    Animal::description = description;
}

bool Animal::isWild() const {
    return wild;
}

void Animal::setWild(bool wild) {
    Animal::wild = wild;
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

void Animal::setReproduction(const Reproduction &reproduction) {
    Animal::reproduction = reproduction;
}

Animal::SkinType Animal::getSkinType() const {
    return skinType;
}

void Animal::setSkinType(const SkinType &skinType) {
    Animal::skinType = skinType;
}

