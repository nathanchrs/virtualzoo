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
    Habitat(HabitatType type) : type(type) {}

    HabitatType getType() const {
        return type;
    }

    void setType(HabitatType type) {
        Habitat::type = type;
    }

    char render() const {
        switch (type) {
            case AirHabitat: // TODO habitat dalam cage itu huruf besar rendernya
                return 'a';
            case LandHabitat:
                return 'l';
            case WaterHabitat:
                return 'w';
        }
    }

private:
    HabitatType type;
};

#endif //HABITAT_H
