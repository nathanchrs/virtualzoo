#ifndef RENDERER_H
#define RENDERER_H

#include "../Zoo/Zoo.h"

/** @class Renderer
	* Kelas abstrak Renderer yang berfungsi untuk menggambar objek.
	*/
class Renderer {
public:
  /** @brief Menggambar sebuah kebun binatang di atas console teks.
    * Merupakan pure virtual function.
    * @param zoo Kebun binatang yang akan digambarkan di atas console teks.
    */
  virtual void Render(const Zoo &zoo, bool use_color = false) = 0;
};

#endif //RENDERER_H
