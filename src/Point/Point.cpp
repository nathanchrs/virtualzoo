#include "Point.h"

Point::Point() {
    x = 0;
    y = 0;
}

Point::Point(int x, int y) {
    this -> x = x;
    this -> y = y;
}

int Point::GetAbsis() {
    return x;
}

int Point::GetOrdinat() {
    return y;
}

void Point::SetAbsis(int _X) {
    x = _X;
}

void Point::SetOrdinat(int _Y) {
    y = _Y;
}