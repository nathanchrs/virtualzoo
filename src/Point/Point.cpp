#include "Point.h"

Point::Point() {
    x = 0;
    y = 0;
}

Point::Point(int x, int y) {
    this -> x = x;
    this -> y = y;
}

int Point::getX() const {
    return x;
}

int Point::getY() const {
    return y;
}

void Point::setX(int _X) {
    x = _X;
}

void Point::setY(int _Y) {
    y = _Y;
}