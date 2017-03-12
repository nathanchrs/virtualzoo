#ifndef ROAD_H
#define ROAD_H


#include "../Facility.h"

/** @class Road
  * Kelas Road yang merepesentasikan fasilitas yang berupa jalan.
  */
class Road : public Facility{
public:
    /** @brief Constructor.
      * Menciptakan sebuah jalan dengan status aksesibilitas tertentu.
      * @param _accessible Status aksesibiltas jalan.
      */
    Road(bool _accessible);

    /** @brief Destructor.
      */
    virtual ~Road();

    /** @brief Memeriksa apakah jalan adalah jalan masuk atau bukan.
      * @return True jika jalan adalah jalan masuk dan false jika bukan.
      */
    bool isEntrance();

    /** @brief Memeriksa apakah jalan adalah jalan keluar atau bukan.
      * @return True jika jalan adalah jalan kelluar dan false jika bukan.
      */
    bool isExit();

    /** @brief Menampilkan jalan ke console teks.
      */
    void render();

protected:
    bool entrance;
    bool exit;
};


#endif //ROAD_H
