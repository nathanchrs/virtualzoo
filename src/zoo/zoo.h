//Author : Jordhy

#ifndef ZOO_H
#define ZOO_H

#include <istream>
#include <exception>
#include <string>
#include "cell/cell.h"
#include "zone/cage.h"

using namespace std;

/** @class ZoneAlreadyExistsException
  * Exception yang akan di-throw jika mencoba menambahkan zone dengan nama yang
  * sudah ada.
  */
class ZoneAlreadyExistsException : public exception {};

/** @class WrongHabitatException
  * Exception yang akan di-throw jika mencoba memasukkan hewan ke habitat yang
  * tidak sesuai.
  */
class WrongHabitatException : public exception {};

/** @class InputException
  * Exception yang akan di-throw jika format input tidak sesuai.
  */
class InputException : public exception {};

/** @class Zoo
  * Kelas Zoo yang merepresentasikan sebuah kebun binatang.
  */
class Zoo {
public:
  /** @brief Constructor.
    * @details Menciptakan kebun binatang dengan ukuran tertentu.
    * @param rows Ukuran vertikal kebun binatang.
    * @param cols Ukuran horizontal kebun binatang.
    */
  Zoo(int rows, int cols);

  /** @brief Constructor
    * @details Menciptakan kebun binatang berdasarkan data dari sumber input eksternal.
    * @param is Input stream sumber input.
    */
  Zoo(istream &is);

  /** @brief Destructor.
    */
  ~Zoo();

  /** @brief Menambahkan sebuah zona ke dalam kebun binatang.
    * @param zoneName Nama zona yang ditambahkan ke dalam kebun binatang.
    */
  void AddZone(const Zone &zone);

  /** @brief Menambahkan sebuah cell ke dalam kebun binatang.
    * @param cell Cell yang ditambahkan ke dalam kebun binatang.
    * @param zoneName Cell akan ditambahkan sebagai bagian dari zona dengan
    * nama ini.
    */
  void AddCell(const Cell &cell, string zoneName);

  /** @brief Menambahkan sebuah cell ke dalam kebun binatang.
    * @param animal Animal yang ditambahkan ke dalam kebun binatang.
    * @param cageName Animal akan ditambahkan sebagai bagian dari zona/cage
    * dengan nama ini.
    */
  void AddAnimal(const Animal &animal, string cageName);

  /** @brief Mengembalikan peta Cell yang ada
    * @return Reference ke array dari Cell yang ada
    */
  const Array<Cell *> &GetCells() const;

  /** @brief Mengembalikan daftar Zone yang ada.
    * @return Reference ke array dari Zone yang ada.
    */
  const Array<Zone *> &GetZones() const;

  /** @brief Mengembalikan ukuran jumlah baris.
    * @return Jumlah baris.
    */
  int GetRows() const;

  /** @brief Mengembalikan ukuran jumlah kolom.
    * @return Jumlah kolom.
    */
  int GetCols() const;

  /** @brief Menghitung dan menampilkan banyaknya makanan (daging dan sayuran)
    * yang dikonsumsi oleh semua hewan di kebun binatang setiap harinya.
    *  @return Berat total daging yang dibutuhkan.
    */
  double CalculateTotalMeat() const;

  /** @brief Menghitung dan menampilkan banyaknya makanan (daging dan sayuran)
    *  yang dikonsumsi oleh semua hewan di kebun binatang setiap harinya.
    *  @return Berat total sayuran yang dibutuhkan.
    */
  double CalculateTotalVegetable() const;

  /** @brief Mencari zona yang namanya adalah zoneName.
    * @param zoneName Nama zona yang ingin dicari.
    * @return Pointer ke zona yang ingin dicari, atau nullptr jika tidak ada.
    */
  Zone *FindZone(string zoneName) const;

  /**
   * @brief Mencari zona mana yang mengandung posisi cell_position
   * @param cell_position Posisi zona yang ingin dicari.
   * @return Pointer ke zona tersebut, jika tidak ada bernilai nullptr.
   */
  Zone* FindZone(Point cell_position) const;

  /** @brief Menghasilkan string berisi interaksi apa saja yang terkandung dalam
    * sebuah petak.
    * @param cell_position posisi petak.
    * @return Daftar interaksi di petak tersebut.
    */
  string ListInteractions(Point cell_position) const;

  /** @brief Menghasilkan string berisi interaksi apa saja yang terkandung dalam
    * sebuah petak dan petak-petak lainnya yang berada tepat di sebelahnya.
    * @param cell_position posisi petak.
    * @return Daftar interaksi di petak tersebut dan petak-petak sebelahnya.
    */
  string ListNeighboringInteractions(Point cell_position) const;

private:

  int idx(int r, int c) const {
    return r * cols + c;
  }

  int idx(const Point &p) const {
    return p.GetR() * cols + p.GetC();
  }

  int rows;
  int cols;
  Array<Cell*> cells;
  Array<Zone*> zones;
};

#endif //ZOO_H
