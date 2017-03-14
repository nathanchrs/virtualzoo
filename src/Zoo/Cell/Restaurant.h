#ifndef RESTAURANT_H
#define RESTAURANT_H

#include "Cell.h"

/** @class Restaurant
  * Kelas Restaurant yang merepesentasikan fasilitas yang berupa restoran.
  */
class Restaurant : public Cell {
public:
  /** @brief Constructor.
    * Menciptakan sebuah restoran dengan status aksesibilitas tertentu.
    * @param accessible Status aksesibilitas restoran.
    */
  Restaurant(Point position, bool accessible = false) : Cell(position,
                                                             accessible) {}

  /**
   * @brief Menampilkan restoran ke console teks.
   * @return Representasi teks restoran.
   */
  char Render() const {
    return 'r';
  }

  /** @brief Mengembalikan pointer ke objek baru yang dibuat secara dinamis.
  * @return Pointer ke objek yang baru dibuat.
  */
  Cell *Clone() const {
    return new Restaurant(*this);
  };
};

#endif //RESTAURANT_H
