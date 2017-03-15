//Author : Jonathan

#ifndef BASICCONSOLERENDERER_H
#define BASICCONSOLERENDERER_H

#include "../../Zoo/Zoo.h"
#include "../Renderer.h"

/** @class BasicConsoleRenderer
  * Berfungsi untuk menggambar objek di atas console teks.
  */
class BasicConsoleRenderer : public Renderer {
public:

  /** @brief Menggambar sebuah kebun binatang di atas console teks.
   *  @param zoo Kebun binatang yang akan digambarkan di atas console teks.
   *  @param top_left Batas kiri atas peta yang akan digambar (r1, c1).
   *  @param bottom_right Batas kanan bawah peta yang akan digambar (r2, c2);
   *  @param use_color Jika true, output tampilan berwarna
   */
  void Render(const Zoo &zoo, Point top_left, Point bottom_right,
              bool use_color = false);

  /**
   * @brief Menampilkan menu utama.
   * @param use_color Jika true, output tampilan berwarna
   */
  void DisplayMenu(bool use_color = false);
};

#endif //BASICCONSOLERENDERER_H
