#ifndef HABITAT_H
#define HABITAT_H

#include "../Cell.h"

/** @class Habitat
  * Kelas abstrak Habitat yang merepesentasikan petak tanah berukuran 1m x 1m yang merupakan habitat.
  */
class Habitat : public Cell{
public:
    /** @brief Constructor.
      * Menciptakan sebuah Habitat dengan jenis tertentu.
      * Habitat tidak dapat diakses.
      * @param _habitatType Jenis dari habitat.
      */
    Habitat(char _habitatType);

    /** @brief Destructor.
      */
    virtual ~Habitat();
protected:
    char habitatType;
};

#endif //HABITAT_H
