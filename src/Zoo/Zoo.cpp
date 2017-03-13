#include "Zoo.h"

Zoo::Zoo(int rows, int cols) : rows(rows), cols(cols), cells(rows * cols), zones() {}

Zoo::~Zoo() {
    for (int i = 0; i < cells.size(); i++) {
        delete cells[i];
    }
    for (int i = 0; i < zones.size(); i++) {
        delete zones[i];
    }
}

void Zoo::addZone(const Zone &zone) {
    zones.pushBack(zone.clone());
}

void Zoo::addCell(const Cell &cell, string zoneName) {

}

void Zoo::addAnimal(const Animal &animal, string cageName) {

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