#ifndef AIRHABITAT_H
#define AIRHABITAT_H


#include "../Habitat.h"

/** @class AirHabitat
  * Kelas AirHabitat yang merepesentasikan habitat untuk hewan udara.
  */
class AirHabitat : public Habitat{
public:
    /** @brief Constructor.
      * Menciptakan sebuah AirHabitat.
      */
    AirHabitat();

    /** @brief Destructor.
      */
    virtual ~AirHabitat();

    /** @brief Menampilkan AirHabitat ke console teks.
      */
    void render();
};

#endif //AIRHABITAT_H
