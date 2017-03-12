#ifndef LANDHABITAT_H
#define LANDHABITAT_H


#include "../Habitat.h"

/** @class LandHabitat
  * Kelas LandHabitat yang merepesentasikan habitat untuk hewan darat.
  */
class LandHabitat : public Habitat{
public:
    /** @brief Constructor.
      * Menciptakan sebuah LandHabitat.
      */
    LandHabitat();

    /** @brief Destructor.
     */
    virtual ~LandHabitat();

    /** @brief Menampilkan LandHabitat ke console teks.
      */
    void render();
};


#endif //LANDHABITAT_H
