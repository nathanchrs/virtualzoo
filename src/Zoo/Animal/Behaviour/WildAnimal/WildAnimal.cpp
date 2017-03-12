#include "WildAnimal.h"

WildAnimal::WildAnimal(int _numPrey): numPrey(_numPrey),Behaviour(true) {
    preyList = new string[numPrey];
    preyIndex = 0;
}

WildAnimal::~WildAnimal() {
    delete [] preyList;
}

void WildAnimal::AddPrey(const string &preyName) {
    preyList[preyIndex] = preyName;
    preyIndex++;
}

bool WildAnimal::isPrey(const string &preyName) const {
    bool ketemu = false;
    int i = 0;
    while (i < numPrey && !ketemu) {
        if (preyName == preyList[i]) {
            ketemu = true;
        } else {
            i++;
        }
    }
    return ketemu;
}