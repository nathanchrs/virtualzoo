#ifndef RENDERABLE_H
#define RENDERABLE_H

#include "Point.h"

/** @class Renderable
  * Kelas abstrak Renderable yang merepresentasikan perilaku objek yang dapat
  * digambar di atas layar.
  */
class Renderable {
public:
  /** @brief Mengembalikan satu karakter yang merepesentasikan bentuk objek
    * yang bersangkutan di atas console teks.
	  * @details Merupakan pure virtual function.
    * @return Karakter yang merepresentasikan bentuk objek yang bersangkutan.
	  */
  virtual char Render() const = 0;

  /** @brief Mengembalikan posisi untuk pencetakan objek.
    * @details Merupakan pure virtual function.
    * @return Posisi dari objek yang akan dicetak.
	  */
  virtual Point GetPosition() const = 0;
};

#endif //RENDERABLE_H
