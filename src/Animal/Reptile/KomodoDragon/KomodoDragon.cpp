#include "KomodoDragon.h"

KomodoDragon::KomodoDragon(int _weight) : Reptile("KomodoDragon"), Carnivore(_weight) {
    description = "The komodo dragon is a large species of lizard found in the Indonesian islands of Komodo, Rinca, "
                  "Flores, Gili Motang, and Padar. It has been claimed that they have a venomous bite; there are two"
                  " glands in the lower jaw which secrete several toxic proteins. This ovipar animal has land as its habitat";
}

string KomodoDragon::interact() const {
    return "The komodo dragon is eating some beef that the zookeper gave";
}
