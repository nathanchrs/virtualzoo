//Author : Jordhy
//Implementor : Agus

#ifndef CELL_H
#define CELL_H

#include "../../Renderer/Renderable.h"
#include "../../Renderer/Point.h"

/** @class Cell
  * Kelas abstrak Cell yang merepesentasikan sebuah petak tanah.
  */
class Cell : public Renderable {
public:
  /** @brief Constructor.
    * Menciptakan sebuah Cell dengan posisi dan status aksesibilitas tertentu.
    * @param position Posisi dari Cell.
    * @param accessible Status aksesibilitas dari Cell.
    */
  Cell(Point position, bool accessible = false) : position(position),
                                                  accessible(accessible) {}

  /** @brief Destructor.
    */
  virtual ~Cell() {};

  /** @brief Memeriksa status aksesibilitas dari Cell.
    * @return Status aksesibiltas dari Cell
    * (true jika bisa diakses dan false jika tidak).
    */
  bool IsAccessible() const {
    return accessible;
  };

  /**
   * @brief Mengembalikan posisi cell.
   * @return Posisi cell.
   */
  Point GetPosition() const {
    return position;
  }

  /** @brief Mengembalikan pointer ke objek baru yang dibuat secara dinamis.
   * @return Pointer ke objek yang baru dibuat.
   */
  virtual Cell *Clone() const = 0;

private:
  bool accessible;
  Point position;
};

#endif //CELL_H
