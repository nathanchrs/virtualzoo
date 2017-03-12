#include "Zoo.h"

Zoo::Zoo(int _length, int _width, int _maxCage, int _maxEntrance):length(_length), width(_width), maxCage(_maxCage), maxEntrance(_maxEntrance) {
    cells = new Cell** [length];
    for (int i = 0; i < length; i++) {
        cells[i] = new Cell *[width];
    }
    cages = new Cage*;
    entrances = new Entrance*[maxEntrance];
    numOfCage = 0;
    numOfEntrance = 0;
}

Zoo::~Zoo() {
    for (int i = 0; i < width; i++) {
        delete [] cells[i];
    }
    delete [] cells;
    delete [] cages;
    delete [] entrances;
}

void Zoo::addCell(Cell *_cell, const Point &_position) {
    cells[_position.getR()][_position.getC()] = _cell;
}

void Zoo::addCage(Cage *_cage) {
    cages[numOfCage] = _cage;
    numOfCage++;
}

void Zoo::addAnimalToCage(Animal *_animal, int cageID) {
    cages[cageID]->addAnimal(_animal);
}

void Zoo::addEntrance(Entrance *_entrance) {
    entrances[numOfEntrance] = _entrance;
    numOfEntrance++;
}

void Zoo::displayZoo(const Point &topLeft, const Point &topRight) {
    //TODO JonISI
}

void Zoo::tourZoo() {
    //TODO JonISI
}