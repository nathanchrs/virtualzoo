#include "Zoo.h"
#include "Cell/Road.h"
#include "Cell/Habitat.h"
#include "Cell/Park.h"
#include "Cell/Restaurant.h"
#include "Animal/Aves/Eagle/Eagle.h"
#include "Animal/Pisces/FrenchAngelFish/FrenchAngelFish.h"
#include "Animal/Pisces/Lionfish/Lionfish.h"
#include "Animal/Mammals/Orangutan/Orangutan.h"
#include "Animal/Reptile/Chameleon/Chameleon.h"
#include "Animal/Reptile/KomodoDragon/KomodoDragon.h"
#include "Animal/Aves/Owl/Owl.h"
#include "Animal/Aves/Parrot/Parrot.h"
#include "Animal/Aves/Peacock/Peacock.h"
#include "Animal/Aves/Pigeon/Pigeon.h"
#include "Animal/Pisces/Barracuda/Barracuda.h"
#include "Animal/Pisces/Ray/Ray.h"
#include "Animal/Pisces/Seahorse/Seahorse.h"
#include "Animal/Mammals/Gorilla/Gorilla.h"
#include "Animal/Mammals/Leopard/Leopard.h"
#include "Animal/Mammals/Lion/Lion.h"
#include "Animal/Mammals/Tiger/Tiger.h"
#include "Animal/Reptile/Cobra/Cobra.h"
#include "Animal/Reptile/Iguana/Iguana.h"
#include "Animal/Reptile/Python/Python.h"

Zoo::Zoo(int rows, int cols) : rows(rows), cols(cols), cells(rows * cols), zones() {
    for (int i = 0; i < rows * cols; i++) {
        cells[i] = new Road(Point(i / cols, i % cols));
    }
}

Zoo::Zoo(istream &is) {
    is >> rows >> cols;
    cells = Array<Cell*>(rows * cols);
    for (int i = 0; i < rows * cols; i++) {
        cells[i] = new Road(Point(i / cols, i % cols));
    }

    int zoneCount;
    is >> zoneCount;
    for (int i = 0; i < zoneCount; i++) {
        string zoneType;
        string zoneName;
        is >> zoneType >> zoneName;
        if (zoneType == "Cage") {
            addZone(Cage(zoneName));
        } else if (zoneType == "Zone") {
            addZone(Zone(zoneName));
        } else {
            throw InputException();
        }

        int cellCount;
        is >> cellCount;
        for (int j = 0; j < cellCount; j++) {
            string cellType;
            int r, c;
            is >> cellType >> r >> c;
            Point pos = Point(r, c);
            if (cellType == "AirHabitat") {
                addCell(Habitat(pos, Habitat::AirHabitat), zoneName);
            } else if (cellType == "LandHabitat") {
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
            bool wild;
            is >> species >> r >> c >> weight >> wild;
            Point pos = Point(r, c);
            if (species == "Eagle") {
                Eagle animal = Eagle(pos, weight, wild);
                addAnimal(animal, zoneName);
            } else if (species == "Owl") {
                Owl animal = Owl(pos, weight, wild);
                addAnimal(animal, zoneName);
            } else if (species == "Parrot") {
                Parrot animal = Parrot(pos, weight, wild);
                addAnimal(animal, zoneName);
            } else if (species == "Peacock") {
                Peacock animal = Peacock(pos, weight, wild);
                addAnimal(animal, zoneName);
            } else if (species == "Pigeon") {
                Pigeon animal = Pigeon(pos, weight, wild);
                addAnimal(animal, zoneName);
            } else if (species == "Barracuda") {
                Barracuda animal = Barracuda(pos, weight, wild);
                addAnimal(animal, zoneName);
            } else if (species == "FrenchAngelFish") {
                FrenchAngelFish animal = FrenchAngelFish(pos, weight, wild);
                addAnimal(animal, zoneName);
            } else if (species == "Lionfish") {
                Lionfish animal = Lionfish(pos, weight, wild);
                addAnimal(animal, zoneName);
            } else if (species == "Ray") {
                Ray animal = Ray(pos, weight, wild);
                addAnimal(animal, zoneName);
            } else if (species == "Seahorse") {
                Seahorse animal = Seahorse(pos, weight, wild);
                addAnimal(animal, zoneName);
            } else if (species == "Gorilla") {
                Gorilla animal = Gorilla(pos, weight, wild);
                addAnimal(animal, zoneName);
            } else if (species == "Leopard") {
                Leopard animal = Leopard(pos, weight, wild);
                addAnimal(animal, zoneName);
            } else if (species == "Lion") {
                Lion animal = Lion(pos, weight, wild);
                addAnimal(animal, zoneName);
            } else if (species == "Orangutan") {
                Orangutan animal = Orangutan(pos, weight, wild);
                addAnimal(animal, zoneName);
            } else if (species == "Tiger") {
                Tiger animal = Tiger(pos, weight, wild);
                addAnimal(animal, zoneName);
            } else if (species == "Chameleon") {
                Chameleon animal = Chameleon(pos, weight, wild);
                addAnimal(animal, zoneName);
            } else if (species == "Cobra") {
                Cobra animal = Cobra(pos, weight, wild);
                addAnimal(animal, zoneName);
            } else if (species == "Iguana") {
                Iguana animal = Iguana(pos, weight, wild);
                addAnimal(animal, zoneName);
            } else if (species == "KomodoDragon") {
                KomodoDragon animal = KomodoDragon(pos, weight, wild);
                addAnimal(animal, zoneName);
            } else if (species == "Python") {
                Python animal = Python(pos, weight, wild);
                addAnimal(animal, zoneName);
            } else {
                throw InputException();
            }
        }
    }
}

Zoo::~Zoo() {
    for (int i = 0; i < cells.Size(); i++) {
        delete cells[i];
    }
    for (int i = 0; i < zones.Size(); i++) {
        delete zones[i];
    }
}

void Zoo::addZone(const Zone &zone) {
    if (findZone(zone.getName()) == nullptr) {
        zones.PushBack(zone.clone());
    } else {
        throw ZoneAlreadyExistsException();
    }
}

void Zoo::addCell(const Cell &cell, string zoneName) {
    Point pos = cell.GetPosition();
    if (pos.InArea(rows, cols)) {
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
        Point pos = animal.GetPosition();
        if (pos.InArea(rows, cols)) {
            Habitat *habitat = dynamic_cast<Habitat*> (cells[idx(pos)]);
            if (habitat == nullptr) {
                throw WrongHabitatException();
            }
            if (animal.IsValidHabitat(habitat->getType())) {
                cage->addAnimal(animal.Clone());
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
    for (int i = 0; i < zones.Size(); i++) {
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

double Zoo::calculateTotalMeat() const {
    double meat = 0.0;
    for (int i = 0; i < zones.size(); i++) {
        Cage *cage = dynamic_cast<Cage*> (zones[i]);
        if (cage != nullptr) {
            Array<Animal*> animals = cage->getAnimals();
            for (int j = 0; j < animals.size(); j++) {
                // meat += animals[j].getDiet().calculateMeat(); TODO
            }
        }
    }
    return meat;
}

double Zoo::calculateTotalVegetable() const {
    double vegetable = 0.0;
    for (int i = 0; i < zones.size(); i++) {
        Cage *cage = dynamic_cast<Cage*> (zones[i]);
        if (cage != nullptr) {
            Array<Animal*> animals = cage->getAnimals();
            for (int j = 0; j < animals.size(); j++) {
               // vegetable += animals[j].getDiet().calculateVegetable(); TODO
            }
        }
    }
    return vegetable;
}

