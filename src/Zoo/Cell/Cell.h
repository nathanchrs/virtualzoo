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
      * Menciptakan sebuah Cell dengan status aksesibilitas tertentu.
      * @param accessible Status aksesibilitas dari Cell.
      */
    Cell(bool accessible = false) : accessible(accessible);

    /** @brief Destructor.
      */
    virtual ~Cell() {};

    /** @brief Memeriksa status aksesibilitas dari Cell.
      * @return Status aksesibiltas dari Cell (true jika bisa diakses dan false jika tidak).
      */
    bool isAccessible() const {
        return accessible;
    };

    /** @brief Menset aksesibilitas dari Cell.
      * @param accessible Aksesibilitas dari Cell.
      */
    void setAccessible(bool accessible) {
        Cell::accessible = accessible;
    }

    /**
     * @brief Mengembalikan posisi cell.
     * @return Posisi cell.
     */
    Point getPosition() const {
        return position;
    }

    /** @brief Menset posisi dari Cell.
      * @param position Posisi dari Cell.
      */
    void setPosition(const Point &position) {
        Cell::position = position;
    };

    /** @brief Mengembalikan nilai Z (posisi depan/belakang) dari Cell.
      * @return Nilai Z dari Cell.
      */
    int getZ() const { return 1; };

private:
    bool accessible;
    Point position;
};

#endif //CELL_H
