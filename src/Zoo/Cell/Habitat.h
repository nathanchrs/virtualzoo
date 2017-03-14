#ifndef HABITAT_H
#define HABITAT_H

#include "Cell.h"

/** @class Habitat
  * Kelas abstrak Habitat yang merepresentasikan petak tanah yang merupakan habitat.
  */
class Habitat : public Cell {
public:

    enum HabitatType { AirHabitat, LandHabitat, WaterHabitat };

    /** @brief Constructor.
      * Menciptakan sebuah Habitat dengan jenis tertentu.
      * @param type Jenis dari habitat.
      */
    Habitat(Point position, HabitatType type) : Cell(position), type(type) {}

    HabitatType getType() const {
        return type;
    }

    void setType(HabitatType type) {
        Habitat::type = type;
    }

    char render() const {
        switch (type) {
            case AirHabitat:
                return 'a';
            case LandHabitat:
                return 'l';
            case WaterHabitat:
                return 'w';
        }
    }

    Cell* clone() const {
        return new Habitat(*this);
    };

private:
    HabitatType type;
};

#endif //HABITAT_H
