#ifndef RESTAURANT_H
#define RESTAURANT_H


#include "../Facility.h"

/** @class Restaurant
  * Kelas Restaurant yang merepesentasikan fasilitas yang berupa restoran.
  */
class Restaurant : public Facility{
public:
    /** @brief Constructor.
      * Menciptakan sebuah restoran dengan status aksesibilitas tertentu.
      * @param _accessible Status aksesibiltas restoran.
      */
    Restaurant(bool _accessible);

    /** @brief Destructor.
      */
    virtual ~Restaurant();

    /** @brief Menampilkan restoran ke console teks.
      */
    void render();
};


#endif //RESTAURANT_H
