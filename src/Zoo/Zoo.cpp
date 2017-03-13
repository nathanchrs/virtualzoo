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
    cells.pushBack(cell.clone());
}

void Zoo::addAnimal(const Animal &animal, string cageName) {

}
