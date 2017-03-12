#include "Behaviour.h"

Behaviour::Behaviour(bool _wild) {
    wild = _wild;
}

bool Behaviour::isWild() const {
    return wild;
}