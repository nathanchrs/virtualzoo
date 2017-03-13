#include "Zoo.h"
#include "Cell/Road.h"

Zoo::Zoo(int rows, int cols) : rows(rows), cols(cols), cells(rows * cols), zones() {
    for (int i = 0; i < rows * cols; i++) {
        cells[i] = new Road(Point(i / cols, i % cols));
    }
}

Zoo::~Zoo() {
    for (int i = 0; i < cells.size(); i++) {
        delete cells[i];
    }
    for (int i = 0; i < zones.size(); i++) {
        delete zones[i];
    }
}

void Zoo::addZone(const Zone &zone) {
    if (findZone(zone.getName()) == nullptr) {
        zones.pushBack(zone.clone());
    } else {
        throw ZoneAlreadyExistsException();
    }
}

void Zoo::addCell(const Cell &cell, string zoneName) {
    delete cells[idx(cell.getPosition())];
    cells[idx(cell.getPosition())] = cell.clone();

    Zone *zone = findZone(zoneName);
    zone->addCell(cells[idx(cell.getPosition())]);
}

void Zoo::addAnimal(const Animal &animal, string cageName) {
    Cage *cage = dynamic_cast<Cage*> (findZone(cageName));
    cage->addAnimal(animal.clone());
}

Zone* Zoo::findZone(string zoneName) const {
    for (int i = 0; i < zones.size(); i++) {
        if (zones[i]->getName() == zoneName) {
            return zones[i];
        }
    }
}

const Array<Cell*> &Zoo::getCells() const {
    return cells;
}

const Array<Zone*> &Zoo::getZones() const {
    return zones;
}

int Zoo::getRows() const {
    return rows;
}

int Zoo::getCols() const {
    return cols;
}
