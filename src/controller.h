//Author : Jonathan

#ifndef CONTROLLER_H
#define CONTROLLER_H

#include "zoo/zoo.h"

/** @class Controller.
  * Kelas Controller yang berfungsi untuk menjalankan fitur-fitur pada zoo.
  */
class Controller {
public:
  /** @brief Constructor.
    * @details Menciptakan sebuah Controller baru untuk sebuah kebun binatang.
    * @param zoo Pointer dari objek zoo yang akan digunakan oleh Controller ini.
    * @param use_color Mengatur apakah Controller ini akan mencetak output
    * secara berwarna.
    */
  Controller(Zoo *zoo, bool use_color = false) : zoo(zoo),
                                                 use_color(use_color) {}

  /** @brief Menampilkan main menu.
    */
  void DisplayMenu();

  /** @brief Menampilkan kebun binatang di atas layar dengan batas yang
   * ditentukan pengguna.
   * @details Menampilkan juga posisi hewan-hewan di atas layar.
   */
  void DisplayZoo();

  /** @brief Melakukan tour keliling kebun binatang.
    * @details Memilih salah satu jalan masuk (Entrance) secara acak dan
    * menampilkan serangkaian experience yang dialami pengunjung.
    * Experience yang dirasakan berdasarkan interaksi dengan hewan-hewan yang
    * ada di setiap Cage yang bersinggungan dengan current Cell.
    * Pemilihan jalan tour dilakukan dengan memilih next Cell bertipe Road
    * yang bersinggungan dengan current Cell yang belum pernah
    * dikunjungi sebelumnya. Jika ada lebih dari satu Cell bertipe Road yang
    * dapat dipilih, pemilihan dilakukan secara acak.
    * Penulusuran akan berhenti saat sudah tidak ada lagi Road yang dapat
    * dipilih, atau telah mencapai jalan keluar (Exit).
    */
  void TourZoo();

  /** @brief Menampilkan data jumlah makanan yang dibutuhkan untuk memberi makan
    * hewan-hewan di dalam kebun binatang selama satu hari.
    */
  void DisplayFoodStatistics();

private:
  Zoo *zoo;
  bool use_color;
};


#endif //CONTROLLER_H
