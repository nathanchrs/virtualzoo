#ifndef CARNIVORE_H
#define CARNIVORE_H

#include "../Diet.h"

class Carnivore : public Diet {
public:
    /** @brief Constructor.
      * Menciptakan hewan karnivora dengan berat tertentu.
      * @param _weight Berat dari hewan.
      */
    Carnivore(int _weight, double _ratio);
};

#endif //CARNIVORE_H
