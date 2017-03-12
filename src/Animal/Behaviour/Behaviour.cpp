#include "Behaviour.h"

Behaviour::Behaviour(bool _wild) {
    wild = _wild;
}

Behaviour::~Behaviour() {

}

bool Behaviour::isWild() const {
    return wild;
}