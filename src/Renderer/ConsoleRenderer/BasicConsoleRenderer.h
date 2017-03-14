#ifndef BASICCONSOLERENDERER_H
#define BASICCONSOLERENDERER_H

#include "../../Zoo/Zoo.h"
#include "../Renderer.h"

/** @class BasicConsoleRenderer
  * Kelas BasicConsoleRenderer yang berfungsi untuk menggambar objek di atas console teks.
  */
class BasicConsoleRenderer : public Renderer {
public:
  /** @brief Menggambar sebuah kebun binatang di atas console teks.
    * @param zoo Kebun binatang yang akan digambarkan di atas console teks.
    */
  void Render(const Zoo &zoo);
};

#endif //BASICCONSOLERENDERER_H
