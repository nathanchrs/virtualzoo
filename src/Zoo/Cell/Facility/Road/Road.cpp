#include "Road.h"

Road::Road(bool _accessible): Facility(_accessible,' '){
    exit = false;
    entrance = false;
}

Road::~Road() {

}

bool Road::isEntrance() {
    return entrance;
}

bool Road::isExit() {
    return exit;
}

void Road::render() {

}