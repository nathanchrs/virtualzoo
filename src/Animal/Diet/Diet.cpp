#include "Diet.h"

Diet::Diet(int _weight) : weight(_weight) {};

bool Diet::IsCarnivore() const {
    return carnivore;
}

bool Diet::IsHerbivore() const {
    return herbivore;
}

bool Diet::IsOmnivore() const {
    return (carnivore && herbivore);
}