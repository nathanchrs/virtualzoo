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
    Road(Point position, bool accessible = true, bool entrance = false, bool exit = false)
            : Cell(position, accessible), entrance(entrance), exit(exit) {}

    bool isEntrance() const {
        return entrance;
    }

    void setEntrance(bool entrance) {
        Road::entrance = entrance;
    }

    bool isExit() const {
        return exit;
    }

    void setExit(bool exit) {
        Road::exit = exit;
    }

    /**
     * @brief Menampilkan jalan ke console teks.
     * @return Representasi teks jalan.
     */
    char render() const {
        return '.';
    }

    Cell* clone() const {
        return new Road(*this);
    };

private:
    bool entrance;
    bool exit;
};

#endif //ROAD_H
