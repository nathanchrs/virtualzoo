#ifndef RENDERABLE_H
#define RENDERABLE_H

#include "Point.h"

/** @class Renderable
  * Kelas abstrak Renderable yang merepresentasikan perilaku objek yang dapat digambar di atas layar.
  */
class Renderable {
public:
    /** @brief Mengembalikan satu karakter yang merepesentasikan bentuk objek yang bersangkutan di atas console teks.
     * Merupakan pure virtual function.
     */
    virtual void render() = 0;

    /**
     * @brief Mengembalikan posisi untuk pencetakan objek.
     */
    virtual Point getPosition() = 0;

    /**
     * @brief Mengembalikan kedalaman objek; objek dengan nilai z yang lebih tinggi akan berada di depan.
     */
    virtual int getZ() = 0;
};

#endif //RENDERABLE_H
