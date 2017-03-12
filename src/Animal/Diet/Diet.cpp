#include "Diet.h"

Diet::Diet(int _weight, double _ratio) : weight(_weight), ratio (_ratio){};

bool Diet::IsCarnivore() const {
    return carnivore;
}

bool Diet::IsHerbivore() const {
    return herbivore;
}

bool Diet::IsOmnivore() const {
    return (carnivore && herbivore);
}
int Diet::calculateTotalFood() const {
    return weight*ratio;
}