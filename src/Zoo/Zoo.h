#ifndef ZOO_H
#define ZOO_H

#include <string>
#include "./Cell/Cell.h"
#include "./Cage/Cage.h"
#include "./Cell/Facility/Road/Entrance/Entrance.h"

/** @class Zoo
  * Kelas Zoo yang merepresentasikan sebuah kebun binatang.
  */
class Zoo {
public:
    /** @brief Constructor.
      * Menciptakan kebun binatang dengan ukuran tertentu dengan sejumlah kandang dan sejumlah jalan masuk.
      */
    Zoo(int _length, int _width, int _maxCage, int _maxEntrance);

    /** @brief Destructor.
      */
    ~Zoo();

    /** @brief Menambahkan sebuah cell ke dalam kebun binatang.
      * @param _cell Cell yang ditambahkan ke dalam kebun binatang.
      * @param _position Posisi dari cell yang ditambahkan.
      */
    void addCell(Cell *_cell, const Point &_position);

    /** @brief Menambahkan sebuah kandang ke dalam kebun binatang.
      * @param _cage Kandang yang ditambahkan ke dalam kebun binatang.
      */
    void addCage(Cage *_cage);

    /** @brief Menambahkan seekor hewan ke dalam kandang yang ditentukan.
      * @param _animal Hewan yang dimasukkan.
      * @param cageID ID dari kandang tempat hewan dimasukkan.
      */
    void addAnimalToCage(Animal *_animal, int cageID);

    /**
     * @brief Menambahkan sebuah entrance ke dalam array of entrance
     * @param _entrance Entrance yang dimasukan.
     */
    void addEntrance(Entrance *_entrance);

    /** @brief Menampilkan kebun binatang di atas layar dengan batas yang ditentukan pengguna.
      * Menampilkan juga posisi hewan-hewan di atas layar.
      * Memanfaatkan method render.
      * @param topLeft Koordinat atas kiri.
      * @param topRight Koordinat bawah-kanan.
      */
    void displayZoo(const Point &topLeft, const Point &topRight);

    /** @brief Melakukan tour keliling kebun binatang.
      * Memilih salah satu jalan masuk (Entrance) secara acak dan menampilkan serangkaian experience yang dialami pengunjung.
      * Experience yang dirasakan berdasarkan interaksi dengan hewan-hewan yang ada di setiap Cage yang bersinggungan dengan current Cell.
      * Pemilihan jalan tour dilakukan dengan memilih next Cell bertipe Road yang bersinggungan dengan current Cell yang belum pernah dikunjungi sebelumnya.
      * Jika ada lebih dari satu Cell bertipe Road yang dapat dipilih, pemilihan dilakukan secara acak.
      * Penulusuran akan berhenti saat sudah tidak ada lagi Road yang dapat dipilih, atau telah mencapai jalan keluar (Exit).
      */
    void tourZoo();

    /** @brief Menghitung dan menampilkan banyaknya makanan (daging dan sayuran) yang dikonsumsi oleh semua hewan di kebun binatang setiap harinya.
      */
    void calculateTotalFood();



private:
    Cell ***cells;
    Cage **cages;
    Entrance **entrances;
    int numOfCage;
    int numOfEntrance;
    const int maxCage;
    const int maxEntrance;
    const int width;
    const int length;
};

#endif //ZOO_H
