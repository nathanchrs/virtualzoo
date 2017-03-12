#ifndef WATERHABITAT_H
#define WATERHABITAT_H


#include "../Habitat.h"

/** @class WaterHabitat
  * Kelas WaterHabitat yang merepesentasikan habitat untuk hewan air.
  */
class WaterHabitat : public Habitat {
public:
    /** @brief Constructor.
      * Menciptakan sebuah WaterHabitat.
      */
    WaterHabitat();

    /** @brief Destructor.
     */
    virtual ~WaterHabitat();

    /** @brief Menampilkan WaterHabitat ke console teks.
      */
    void render();
};


#endif //WATERHABITAT_H
