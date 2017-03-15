//Author : Jonathan, Agus

#include "zoo.h"
#include "cell/road.h"
#include "cell/park.h"
#include "cell/restaurant.h"
#include "animal/aves/eagle/eagle.h"
#include "animal/pisces/french_angel_fish/french_angel_fish.h"
#include "animal/pisces/lionfish/lionfish.h"
#include "animal/mammals/orangutan/orangutan.h"
#include "animal/reptile/chameleon/chameleon.h"
#include "animal/reptile/komodo_dragon/komodo_dragon.h"
#include "animal/aves/owl/owl.h"
#include "animal/aves/parrot/parrot.h"
#include "animal/aves/peacock/peacock.h"
#include "animal/aves/pigeon/pigeon.h"
#include "animal/pisces/barracuda/barracuda.h"
#include "animal/pisces/ray/ray.h"
#include "animal/pisces/seahorse/seahorse.h"
#include "animal/mammals/gorilla/gorilla.h"
#include "animal/mammals/leopard/leopard.h"
#include "animal/mammals/lion/lion.h"
#include "animal/mammals/tiger/tiger.h"
#include "animal/reptile/cobra/cobra.h"
#include "animal/reptile/iguana/iguana.h"
#include "animal/reptile/python/python.h"

Zoo::Zoo(int rows, int cols) : rows(rows), cols(cols), cells(rows * cols),
                               zones() {
  for (int i = 0; i < rows * cols; i++) {
    cells[i] = new Road(Point(i / cols, i % cols));
  }
}

Zoo::Zoo(istream &is) {
  is >> rows >> cols;
  cells = Array<Cell *>(rows * cols);
  for (int i = 0; i < rows * cols; i++) {
    cells[i] = new Road(Point(i / cols, i % cols));
  }

  int zoneCount;
  is >> zoneCount;
  for (int i = 0; i < zoneCount; i++) {
    string zone_type;
    string zone_name;
    is >> zone_type >> zone_name;
    if (zone_type == "Cage") {
      AddZone(Cage(zone_name));
    } else if (zone_type == "Zone") {
      AddZone(Zone(zone_name));
    } else {
      throw InputException();
    }

    int cell_count;
    is >> cell_count;
    for (int j = 0; j < cell_count; j++) {
      string cellType;
      int r, c;
      is >> cellType >> r >> c;
      Point pos = Point(r, c);
      if (cellType == "AirHabitat") {
        AddCell(Habitat(pos, Habitat::AirHabitat), zone_name);
      } else if (cellType == "LandHabitat") {
        AddCell(Habitat(pos, Habitat::LandHabitat), zone_name);
      } else if (cellType == "WaterHabitat") {
        AddCell(Habitat(pos, Habitat::WaterHabitat), zone_name);
      } else if (cellType == "Park") {
        AddCell(Park(pos), zone_name);
      } else if (cellType == "Restaurant") {
        AddCell(Restaurant(pos), zone_name);
      } else if (cellType == "Road") {
        AddCell(Road(pos), zone_name);
      } else if (cellType == "Entrance") {
        AddCell(Road(pos, true, true, false), zone_name);
      } else if (cellType == "Exit") {
        AddCell(Road(pos, true, false, true), zone_name);
      } else {
        throw InputException();
      }
    }

    int animal_count;
    is >> animal_count;
    for (int j = 0; j < animal_count; j++) {
      string species;
      int r, c, weight;
      bool wild;
      is >> species >> r >> c >> weight >> wild;
      Point pos = Point(r, c);
      if (species == "Eagle") {
        Eagle animal = Eagle(pos, weight, wild);
        AddAnimal(animal, zone_name);
      } else if (species == "Owl") {
        Owl animal = Owl(pos, weight, wild);
        AddAnimal(animal, zone_name);
      } else if (species == "Parrot") {
        Parrot animal = Parrot(pos, weight, wild);
        AddAnimal(animal, zone_name);
      } else if (species == "Peacock") {
        Peacock animal = Peacock(pos, weight, wild);
        AddAnimal(animal, zone_name);
      } else if (species == "Pigeon") {
        Pigeon animal = Pigeon(pos, weight, wild);
        AddAnimal(animal, zone_name);
      } else if (species == "Barracuda") {
        Barracuda animal = Barracuda(pos, weight, wild);
        AddAnimal(animal, zone_name);
      } else if (species == "FrenchAngelFish") {
        FrenchAngelFish animal = FrenchAngelFish(pos, weight, wild);
        AddAnimal(animal, zone_name);
      } else if (species == "Lionfish") {
        Lionfish animal = Lionfish(pos, weight, wild);
        AddAnimal(animal, zone_name);
      } else if (species == "Ray") {
        Ray animal = Ray(pos, weight, wild);
        AddAnimal(animal, zone_name);
      } else if (species == "Seahorse") {
        Seahorse animal = Seahorse(pos, weight, wild);
        AddAnimal(animal, zone_name);
      } else if (species == "Gorilla") {
        Gorilla animal = Gorilla(pos, weight, wild);
        AddAnimal(animal, zone_name);
      } else if (species == "Leopard") {
        Leopard animal = Leopard(pos, weight, wild);
        AddAnimal(animal, zone_name);
      } else if (species == "Lion") {
        Lion animal = Lion(pos, weight, wild);
        AddAnimal(animal, zone_name);
      } else if (species == "Orangutan") {
        Orangutan animal = Orangutan(pos, weight, wild);
        AddAnimal(animal, zone_name);
      } else if (species == "Tiger") {
        Tiger animal = Tiger(pos, weight, wild);
        AddAnimal(animal, zone_name);
      } else if (species == "Chameleon") {
        Chameleon animal = Chameleon(pos, weight, wild);
        AddAnimal(animal, zone_name);
      } else if (species == "Cobra") {
        Cobra animal = Cobra(pos, weight, wild);
        AddAnimal(animal, zone_name);
      } else if (species == "Iguana") {
        Iguana animal = Iguana(pos, weight, wild);
        AddAnimal(animal, zone_name);
      } else if (species == "KomodoDragon") {
        KomodoDragon animal = KomodoDragon(pos, weight, wild);
        AddAnimal(animal, zone_name);
      } else if (species == "Python") {
        Python animal = Python(pos, weight, wild);
        AddAnimal(animal, zone_name);
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

void Zoo::AddZone(const Zone &zone) {
  if (FindZone(zone.GetName()) == nullptr) {
    zones.PushBack(zone.Clone());
  } else {
    throw ZoneAlreadyExistsException();
  }
}

void Zoo::AddCell(const Cell &cell, string zoneName) {
  Point pos = cell.GetPosition();
  if (pos.InArea(rows, cols)) {
    delete cells[idx(pos)];
    cells[idx(pos)] = cell.Clone();

    Zone *zone = FindZone(zoneName);
    if (zone != nullptr) {
      zone->AddCell(cells[idx(pos)]);
    } else {
      throw out_of_range("Zone name not found.");
    }
  } else {
    throw out_of_range("Cell position is outside of zoo.");
  }
}

void Zoo::AddAnimal(const Animal &animal, string cageName) {
  Cage *cage = dynamic_cast<Cage *> (FindZone(cageName));
  if (cage != nullptr) {
    Point pos = animal.GetPosition();
    if (pos.InArea(rows, cols)) {
      Habitat *habitat = dynamic_cast<Habitat*> (cells[idx(pos)]);
      if (habitat == nullptr) {
        throw WrongHabitatException();
      }
      if (animal.IsValidHabitat(habitat->GetType())) {
        cage->AddAnimal(animal.Clone());
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

Zone *Zoo::FindZone(string zoneName) const {
  for (int i = 0; i < zones.Size(); i++) {
    if (zones[i]->GetName() == zoneName) {
      return zones[i];
    }
  }
}

const Array<Cell *> &Zoo::GetCells() const {
  return cells;
}

const Array<Zone *> &Zoo::GetZones() const {
  return zones;
}

int Zoo::GetRows() const {
  return rows;
}

int Zoo::GetCols() const {
  return cols;
}

double Zoo::CalculateTotalMeat() const {
  double meat = 0.0;
  for (int i = 0; i < zones.Size(); i++) {
    Cage *cage = dynamic_cast<Cage *> (zones[i]);
    if (cage != nullptr) {
      Array<Animal*> animals = cage->GetAnimals();
      for (int j = 0; j < animals.Size(); j++) {
        meat += animals[j]->CalculateTotalMeat();
      }
    }
  }
  return meat;
}

double Zoo::CalculateTotalVegetable() const {
  double vegetable = 0.0;
  for (int i = 0; i < zones.Size(); i++) {
    Cage *cage = dynamic_cast<Cage*> (zones[i]);
    if (cage != nullptr) {
      Array<Animal*> animals = cage->GetAnimals();
      for (int j = 0; j < animals.Size(); j++) {
        vegetable += animals[j]->CalculateTotalVegetable();
      }
    }
  }
  return vegetable;
}

Zone* Zoo::FindZone(Point cell_position) const {
  for (int i = 0; i < zones.Size(); i++) {
    Array<Cell*> cells = zones[i]->GetCells();
    for (int j = 0; j < cells.Size(); j++) {
      if (cells[j]->GetPosition() == cell_position) {
        return zones[i];
      }
    }
  }
  return nullptr;
}

string Zoo::ListInteractions(Point cell_position) const {
  string interactions = "";
  if (cell_position.InArea(rows, cols)) {
    Cage *cage = dynamic_cast<Cage*> (FindZone(cell_position));
    if (cage != nullptr) {
      Array<Animal*> animals = cage->GetAnimals();
      for (int j = 0; j < animals.Size(); j++) {
        interactions += animals[j]->Interact() + "\n";
      }
    }
  }
  return interactions;
}

string Zoo::ListNeighboringInteractions(Point cell_position) const {
  string interactions = "";
  interactions += ListInteractions(cell_position);
  interactions += ListInteractions(cell_position + Point(0, 1));
  interactions += ListInteractions(cell_position + Point(0, -1));
  interactions += ListInteractions(cell_position + Point(1, 0));
  interactions += ListInteractions(cell_position + Point(-1, 0));
  return interactions;
}
