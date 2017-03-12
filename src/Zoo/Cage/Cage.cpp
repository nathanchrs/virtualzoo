#include "Cage.h"

Cage::Cage(int _size): size(_size),capacity(0.3*size) {
    numOfAnimals = 0;
    numOfHabitats = 0;
    animals = new Animal*[capacity];
    habitats = new Habitat*[size];
}

Cage::~Cage() {
    delete [] animals;
    delete [] habitats;
}

void Cage::addAnimal(Animal *_animal) {
    animals[numOfAnimals] = _animal;
    numOfAnimals++;
}

void Cage::addHabitat(Habitat *_habitat) {
    habitats[numOfHabitats] = _habitat;
    numOfHabitats++;
}

bool Cage::isFull() const {
    return (numOfAnimals == capacity);
}

void Cage::render() {

}