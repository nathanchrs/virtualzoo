#ifndef RENDERER_H
#define RENDERER_H

#include "../Zoo/Zoo.h"

/** @class Renderer
	* Kelas abstrak Renderer yang berfungsi untuk menggambar objek.
	*/
class Renderer {
public:

  /** @brief Menggambar sebuah kebun binatang.
    * @param zoo Kebun binatang yang akan digambarkan.
    * @param top_left Batas kiri atas peta yang akan digambar (r1, c1).
    * @param bottom_right Batas kanan bawah peta yang akan digambar (r2, c2);
    * @param use_color Jika true, output tampilan berwarna
    */
  virtual void Render(const Zoo &zoo, Point top_left, Point bottom_right,
                      bool use_color = false) = 0;
};

#endif //RENDERER_H
