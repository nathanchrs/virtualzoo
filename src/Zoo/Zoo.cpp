#include "Zoo.h"
#include "Cell/Road.h"
#include "Cell/Habitat.h"
#include "Cell/Park.h"
#include "Cell/Restaurant.h"
#include "Animal/Aves/Eagle/Eagle.h"

Zoo::Zoo(int rows, int cols) : rows(rows), cols(cols), cells(rows * cols), zones() {
    for (int i = 0; i < rows * cols; i++) {
        cells[i] = new Road(Point(i / cols, i % cols));
    }
}

Zoo::Zoo(istream &is) {
    is >> rows >> cols;
    Zoo(rows, cols);

    int zoneCount;
    is >> zoneCount;
    for (int i = 0; i < zoneCount; i++) {
        string zoneName;
        is >> zoneName;
        addZone(Zone(zoneName));

        int cellCount;
        is >> cellCount;
        for (int j = 0; j < cellCount; j++) {
            string cellType;
            int r, c;
            is >> cellType >> r >> c;
            Point pos = Point(r, c);
            if (cellType == "AirHabitat") {
                addCell(Habitat(pos, Habitat::AirHabitat), zoneName);
            } else if (cellType == "AirHabitat") {
                addCell(Habitat(pos, Habitat::LandHabitat), zoneName);
            } else if (cellType == "WaterHabitat") {
                addCell(Habitat(pos, Habitat::WaterHabitat), zoneName);
            } else if (cellType == "Park") {
                addCell(Park(pos), zoneName);
            } else if (cellType == "Restaurant") {
                addCell(Restaurant(pos), zoneName);
            } else if (cellType == "Road") {
                addCell(Road(pos), zoneName);
            } else if (cellType == "Entrance") {
                addCell(Road(pos, true, true, false), zoneName);
            } else if (cellType == "Exit") {
                addCell(Road(pos, true, false, true), zoneName);
            } else {
                throw InputException();
            }
        }

        int animalCount;
        is >> animalCount;
        for (int j = 0; j < animalCount; j++) {
            string species;
            int r, c, weight;
            is >> species >> r >> c >> weight;
            Point pos = Point(r, c);
            if (species == "Eagle") {
                Eagle animal = Eagle(weight);
                animal.setPosition(pos);
                addAnimal(animal, zoneName);
            } else if (species == "aaa") {
                // TODO lanjutin
            }
        }
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
    Point pos = cell.getPosition();
    if (pos.inArea(rows, cols)) {
        delete cells[idx(pos)];
        cells[idx(pos)] = cell.clone();

        Zone *zone = findZone(zoneName);
        if (zone != nullptr) {
            zone->addCell(cells[idx(pos)]);
        } else {
            throw out_of_range("Zone name not found.");
        }
    } else {
        throw out_of_range("Cell position is outside of zoo.");
    }
}

void Zoo::addAnimal(const Animal &animal, string cageName) {
    Cage *cage = dynamic_cast<Cage*> (findZone(cageName));
    if (cage != nullptr) {
        Point pos = animal.getPosition();
        if (pos.inArea(rows, cols)) {
            Habitat *habitat = dynamic_cast<Habitat*> (cells[idx(pos)]);
            if (habitat == nullptr) {
                throw WrongHabitatException();
            }
            if (animal.isValidHabitat(habitat->getType())) {
                cage->addAnimal(animal.clone());
            } else {
                throw WrongHabitatException();
            }
        } else {
            throw out_of_range("Animal position is outside of zoo.");
        }
    } else {
        throw out_of_range("Cage name not found.");
    }
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

