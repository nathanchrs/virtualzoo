#include "Cobra.h"

Cobra::Cobra(int _weight) : Reptile("Cobra"), Carnivore(_weight, 0.15) {
    description = "Cobras, with their threatening hoods and intimidating upright postures, are some of the most iconic"
                  " snakes on Earth. Their elegance, prideful stance and venomous bite have made them both respected and"
                  " feared. Cobras occur throughout Africa, the Middle East, India, Southeast Asia, and Indonesia."
                  " This ovipar animal has land as its habitat.";
}

string Cobra::interact() const {
    return "The cobra wag its tail and make some sizzle sound like 'Ssssttt!'";
}
