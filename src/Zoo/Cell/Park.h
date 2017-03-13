#ifndef PARK_H
#define PARK_H

#include "Cell.h"

/** @class Park
  * Kelas Park yang merepesentasikan fasilitas yang berupa taman.
  */
class Park : public Cell {
public:
    /** @brief Constructor.
      * Menciptakan sebuah taman dengan status aksesibilitas tertentu.
      * @param accessible Status aksesibilitas taman.
      */
    Park(bool accessible = false) : Cell(accessible) {}

    /**
     * @brief Menampilkan taman ke console teks.
     * @return Representasi teks taman.
     */
    char render() const {
        return 'p';
    }
};

#endif //PARK_H
