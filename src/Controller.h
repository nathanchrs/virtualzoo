#ifndef VIRTUALZOO_CONTROLLER_H
#define VIRTUALZOO_CONTROLLER_H


#include "Zoo/Zoo.h"

class Controller {
public:

    /**
     * @brief Menampilkan main menu
     */
    static void displayMenu(bool useColor = false);

    /** @brief Menampilkan kebun binatang di atas layar dengan batas yang ditentukan pengguna.
      * Menampilkan juga posisi hewan-hewan di atas layar.
      */
    static void displayZoo(const Zoo &zoo, bool useColor = false);

    /** @brief Melakukan tour keliling kebun binatang.
      * Memilih salah satu jalan masuk (Entrance) secara acak dan menampilkan serangkaian experience yang dialami pengunjung.
      * Experience yang dirasakan berdasarkan interaksi dengan hewan-hewan yang ada di setiap Cage yang bersinggungan dengan current Cell.
      * Pemilihan jalan tour dilakukan dengan memilih next Cell bertipe Road yang bersinggungan dengan current Cell yang belum pernah dikunjungi sebelumnya.
      * Jika ada lebih dari satu Cell bertipe Road yang dapat dipilih, pemilihan dilakukan secara acak.
      * Penulusuran akan berhenti saat sudah tidak ada lagi Road yang dapat dipilih, atau telah mencapai jalan keluar (Exit).
      */
    static void tourZoo(const Zoo &zoo);

    static void displayFoodStatistics(const Zoo &zoo);

};


#endif //VIRTUALZOO_CONTROLLER_H
