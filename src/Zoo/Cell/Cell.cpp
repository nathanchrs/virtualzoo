//
// Created by nim_13515004 on 12/03/17.
//

#include "Cell.h"

Cell::Cell(bool _accessible): accessible(_accessible) {}

bool Cell::isAccessible() const {
    return accessible;
}

void Cell::setPosition(const Point &_position) {
    position = _position;
}

Cell::~Cell() {

}
