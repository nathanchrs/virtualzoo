#ifndef ZOO_H
#define ZOO_H

#include <string>
#include "Cell/Cell.h"
#include "Zone/Cage.h"

using namespace std;

/** @class Zoo
  * Kelas Zoo yang merepresentasikan sebuah kebun binatang.
  */
class Zoo {
public:
    /** @brief Constructor.
      * Menciptakan kebun binatang dengan ukuran tertentu.
      * @param rows Ukuran vertikal kebun binatang.
      * @param cols Ukuran horizontal kebun binatang.
      */
    Zoo(int rows, int cols);

    /** @brief Destructor.
      */
    ~Zoo();

    /** @brief Menambahkan sebuah zona ke dalam kebun binatang.
      * @param zoneName Nama zona yang ditambahkan ke dalam kebun binatang.
      */
    void addZone(const Zone &zone);

    /** @brief Menambahkan sebuah cell ke dalam kebun binatang.
      * @param cell Cell yang ditambahkan ke dalam kebun binatang.
      * @param zoneName Cell akan ditambahkan sebagai bagian dari zona dengan nama ini.
      */
    void addCell(const Cell &cell, string zoneName);

    /** @brief Menambahkan sebuah cell ke dalam kebun binatang.
      * @param animal Animal yang ditambahkan ke dalam kebun binatang.
      * @param cageName Animal akan ditambahkan sebagai bagian dari zona/cage dengan nama ini.
      */
    void addAnimal(const Animal &animal, string cageName);

    /** @brief Menampilkan kebun binatang di atas layar dengan batas yang ditentukan pengguna.
      * Menampilkan juga posisi hewan-hewan di atas layar.
      * Memanfaatkan method render.
      * @param topLeft Koordinat atas kiri.
      * @param topRight Koordinat bawah-kanan.
      */
    //void displayZoo(const Point &topLeft, const Point &topRight);

    /** @brief Melakukan tour keliling kebun binatang.
      * Memilih salah satu jalan masuk (Entrance) secara acak dan menampilkan serangkaian experience yang dialami pengunjung.
      * Experience yang dirasakan berdasarkan interaksi dengan hewan-hewan yang ada di setiap Cage yang bersinggungan dengan current Cell.
      * Pemilihan jalan tour dilakukan dengan memilih next Cell bertipe Road yang bersinggungan dengan current Cell yang belum pernah dikunjungi sebelumnya.
      * Jika ada lebih dari satu Cell bertipe Road yang dapat dipilih, pemilihan dilakukan secara acak.
      * Penulusuran akan berhenti saat sudah tidak ada lagi Road yang dapat dipilih, atau telah mencapai jalan keluar (Exit).
      */
    //void tourZoo();

    /** @brief Menghitung dan menampilkan banyaknya makanan (daging dan sayuran) yang dikonsumsi oleh semua hewan di kebun binatang setiap harinya.
     *  @return Berat total daging yang dibutuhkan.
     */
    int calculateTotalMeat() const;

    /** @brief Menghitung dan menampilkan banyaknya makanan (daging dan sayuran) yang dikonsumsi oleh semua hewan di kebun binatang setiap harinya.
     *  @return Berat total sayuran yang dibutuhkan.
     */
    int calculateTotalVegetable() const;

private:
    Array<Cell*> cells;
    Array<Zone*> zones;
    int rows;
    int cols;
};

#endif //ZOO_H
