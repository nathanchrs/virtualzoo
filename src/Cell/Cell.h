#ifndef CELL_H
#define CELL_H

#include "../Renderable/Renderable.h"
#include "../Point/Point.h"

/** @class Cell
  * Kelas abstrak Cell yang merepesentasikan petak tanah berukuran 1m x 1m.
  */
class Cell : public Renderable{
public:
    /** @brief Constructor.
      * Menciptakan sebuah Cell dengan status aksesibilitas tertentu.
      * @param _accessible Status aksesibilitas dari Cell.
      */
    Cell(bool _accessible);

    /** @brief Destructor.
      */
    virtual ~Cell();

    /** @brief Memeriksa status aksesibilitas dari Cell.
      * @return Status aksesibiltas dari Cell (true jika bisa diakses dan false jika tidak).
      */

    bool isAccessible() const;

    /** @brief Menset posisi dari Cell.
      * @param _position Posisi dari Cell.
      */
    void setPosition(const Point &_position);

    /** @brief Mengambil nilai absis dari posisi Cell.
      * @return Nilai absis dari posisi Cell.
      */
    int getX() const;

    /**@brief Mengambil nilai ordinat dari posisi Cell.
      * @return Nilai ordinat dari posisi Cell.
      */
    int getY() const;
protected:
    const bool accessible;
    Point position;
};

#endif //CELL_H
