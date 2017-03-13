#ifndef TIGER_H
#define TIGER_H

#include "../Mammals.h"
#include "../../Diet/Carnivore/Carnivore.h"

/** @class Tiger
  * Kelas Tiger yang merepesentasikan harimau.
  */
class Tiger : public Mammals, public Carnivore {
public:
    /** @brief Constructor.
      * Menciptakan harimau.
      */
    Tiger(const Point& pos, int _weight, bool wild);

    /** @brief Melakukan interaksi dengan harimau.
      * @return Experience yang dirasakan ketika berinteraksi dengan harimau.
      */
    string interact() const;

    Animal* clone() const {
        return new Tiger(*this);
    };
};

#endif //TIGER_H
