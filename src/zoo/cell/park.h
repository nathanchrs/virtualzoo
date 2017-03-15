//Author : Jonathan
//Implementor : Agus

#ifndef PARK_H
#define PARK_H

#include "cell.h"

/** @class Park
  * Kelas Park yang merepesentasikan fasilitas yang berupa taman.
  */
class Park : public Cell {
public:

  /** @brief Constructor.
    * @details Menciptakan sebuah taman dengan status aksesibilitas
    * tertentu pada posisi tertentu.
    * @param position Posisi dari taman.
    * @param accessible Status aksesibilitas taman.
    */
  Park(Point position, bool accessible = false) : Cell(position, accessible) {}

  /** @brief Menampilkan taman ke console teks.
    * @return Representasi teks taman.
    */
  char Render() const {
    return 'p';
  }

  /** @brief Mengembalikan pointer ke objek baru yang dibuat secara dinamis.
    * @return Pointer ke objek yang baru dibuat.
    */
  Cell *Clone() const {
    return new Park(*this);
  };
};

#endif //PARK_H
