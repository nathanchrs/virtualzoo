#ifndef HERBIVORE_H
#define HERBIVORE_H

#include "../Diet.h"

class Herbivore : public Diet {
public:
    /** @brief Constructor.
      * Menciptakan hewan herbivora dengan berat tertentu.
      * @param _weight Berat dari hewan.
      */
    Herbivore(int _weight, double _ratio);
};

#endif //HERBIVORE_H
