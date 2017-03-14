#ifndef ZOO_H
#define ZOO_H

#include <istream>
#include <exception>
#include <string>
#include "Cell/Cell.h"
#include "Zone/Cage.h"
using namespace std;

/**
 * Exception yang akan di-throw jika mencoba menambahkan zone dengan nama yang sudah ada.
 */
class ZoneAlreadyExistsException : public exception {};

/**
 * Exception yang akan di-throw jika mencoba memasukkan hewan ke habitat yang tidak sesuai.
 */
class WrongHabitatException : public exception {};

/**
 * Exception yang akan di-throw jika format input tidak sesuai.
 */
class InputException : public exception {};

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

    /**
     * @brief Constructor
     * Menciptakan kebun binatang berdasarkan data dari sumber input eksternal.
     * @param is Input stream sumber input.
     */
    Zoo(istream &is);

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

    const Array<Cell*> &getCells() const;

    const Array<Zone*> &getZones() const;

    int getRows() const;

    int getCols() const;

    /** @brief Menghitung dan menampilkan banyaknya makanan (daging dan sayuran) yang dikonsumsi oleh semua hewan di kebun binatang setiap harinya.
     *  @return Berat total daging yang dibutuhkan.
     */
    double calculateTotalMeat() const;

    /** @brief Menghitung dan menampilkan banyaknya makanan (daging dan sayuran) yang dikonsumsi oleh semua hewan di kebun binatang setiap harinya.
     *  @return Berat total sayuran yang dibutuhkan.
     */
    double calculateTotalVegetable() const;

    Zone* findZone(string zoneName) const; // TODO

private:

    int idx(int r, int c) const {
        return r * cols + c;
    }

    int idx(const Point &p) const {
        return p.GetR() * cols + p.GetC();
    }

    Array<Cell*> cells;
    Array<Zone*> zones;
    int rows;
    int cols;
};

#endif //ZOO_H
