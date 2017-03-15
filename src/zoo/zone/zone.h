//Author : Jonathan
//Implementor : Jordhy

#ifndef ZONE_H
#define ZONE_H

#include <string>
#include "../../array/array.h"
#include "../cell/cell.h"

using namespace std;

class Zone {
public:

  /** @brief Constructor.
    * @details Menciptakan kelas zona yang menyimpan daftar petak-petak dalam zoo.
    * @param name Nama zona.
    */
  Zone(const string &name) : name(name) {}

  /** @brief Destructor.
    */
  virtual ~Zone() {};

  /** @brief Mendaftarkan petak ke zona ini.
    * @param cell Pointer ke Cell yang akan ditambah.
    */
  virtual void AddCell(Cell *cell) { cells.PushBack(cell); };

  /** @brief Mengembalikan nama zona.
    * @return Nama zona.
    */
  string GetName() const {
    return name;
  }

  /** @brief Mengeset nama zona.
    * @param name Nama zona baru.
    */
  void SetName(const string &name) {
    Zone::name = name;
  }

  /** @brief Mengembalikan daftar petak-petak yang terdaftar di zona ini.
    * @return Reference ke array yang mengandung daftar pointer ke Cell.
    */
  const Array<Cell*> &GetCells() const {
    return cells;
  }

  /** @brief Mengembalikan jumlah petak yang terdaftar dalam zona ini.
    * @return Jumlah petak yang terdaftar dalam zona ini.
    */
  int Size() const { return cells.Size(); }

  /** @brief Mengembalikan pointer ke objek baru yang dibuat secara dinamis.
    * @return Pointer ke objek yang baru dibuat.
    */
  virtual Zone *Clone() const {
    return new Zone(*this);
  };

private:
  string name;
  Array<Cell*> cells;
};

#endif //ZONE_H
