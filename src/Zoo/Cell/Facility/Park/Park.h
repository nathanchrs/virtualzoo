#ifndef PARK_H
#define PARK_H

#include "../Facility.h"

/** @class Park
  * Kelas Park yang merepesentasikan fasilitas yang berupa taman.
  */
class Park : public Facility{
public:
    /** @brief Constructor.
      * Menciptakan sebuah taman dengan status aksesibilitas tertentu.
      * @param _accessible Status aksesibiltas taman.
      */
    Park(bool _accessible);

    /** @brief Destructor.
      */
    virtual ~Park();

    /** @brief Menampilkan taman ke console teks.
      */
    void render();
};


#endif //PARK_H
