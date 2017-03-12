//
// Created by nim_13515004 on 12/03/17.
//

#include "Cell.h"

Cell::Cell(bool _accessible): accessible(_accessible) {

}

int Cell::getX() const {
    return position.getX();
}

int Cell::getY() const {
    return position.getY();
}

bool Cell::isAccessible() const {
    return accessible;
}

void Cell::setPosition(const Point &_position) {
    position = _position;
}

Cell::~Cell() {

}
