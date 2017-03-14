#ifndef ROAD_H
#define ROAD_H

#include "Cell.h"

/** @class Road
  * Kelas Road yang merepresentasikan fasilitas yang berupa jalan.
  */
class Road : public Cell {
public:
  /** @brief Constructor.
    * Menciptakan sebuah jalan dengan status aksesibilitas tertentu.
    * @param accessible Status aksesibilitas jalan.
    */
  Road(Point position, bool accessible = true, bool entrance = false,
       bool exit = false)
      : Cell(position, accessible), entrance(entrance), exit(exit) {}

  /**
   * @brief Mengecek apakah sebuah petak jalan adalah pintu masuk.
   * @return True jika dan hanya jika petak jalan adalah pintu masuk.
   */
  bool IsEntrance() const {
    return entrance;
  }

  /**
   * @brief Mengeset apakah sebuah jalan adalah pintu masuk.
   * @param entrance Jika true, mengeset jalan menjadi pintu masuk.
   * Jika false, mengeset jalan menjadi bukan pintu masuk.
   */
  void SetEntrance(bool entrance) {
    Road::entrance = entrance;
  }

  /**
   * @brief Mengecek apakah sebuah petak jalan adalah pintu keluar.
   * @return True jika dan hanya jika petak jalan adalah pintu keluar.
   */
  bool IsExit() const {
    return exit;
  }

  /**
   * @brief Mengeset apakah sebuah jalan adalah pintu keluar.
   * @param entrance Jika true, mengeset jalan menjadi pintu keluar.
   * Jika false, mengeset jalan menjadi bukan pintu keluar.
   */
  void SetExit(bool exit) {
    Road::exit = exit;
  }

  /**
   * @brief Menampilkan jalan ke console teks.
   * @return Representasi teks jalan.
   */
  char Render() const {
    return '.';
  }

  /** @brief Mengembalikan pointer ke objek baru yang dibuat secara dinamis.
   * @return Pointer ke objek yang baru dibuat.
   */
  Cell *Clone() const {
    return new Road(*this);
  };

private:
  bool entrance;
  bool exit;
};

#endif //ROAD_H
