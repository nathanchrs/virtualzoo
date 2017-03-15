//Author : Jordhy
//Implementor : Agus

#ifndef HABITAT_H
#define HABITAT_H

#include "Cell.h"

/** @class Habitat
  * Kelas abstrak Habitat yang merepresentasikan petak habitat.
  */
class Habitat : public Cell {
public:

  /** @enum HabitatType
    * Jenis-jenis habitat yang ada.
    */
  enum HabitatType { AirHabitat, LandHabitat, WaterHabitat };

  /** @brief Constructor.
    * @details Menciptakan sebuah Habitat dengan jenis tertentu pada posisii tertentu.
    * @param position Posisi sel habitat.
    * @param type Jenis dari habitat.
    */
  Habitat(Point position, HabitatType type) : Cell(position), type(type) {}

  /** @brief Mengembalikan jenis habitat.
    * @return Jenis habitat.
    */
  HabitatType GetType() const {
    return type;
  }

  /** @brief Mengembalikan representasi teks habitat.
    * @return Sebuah char yang merupakan representasi teks habitat.
    */
  char Render() const {
    switch (type) {
      case AirHabitat:
        return 'a';
      case LandHabitat:
        return 'l';
      case WaterHabitat:
        return 'w';
    }
  }

  /** @brief Mengembalikan pointer ke objek baru yang dibuat secara dinamis.
    * @return Pointer ke objek yang baru dibuat.
    */
  Cell *Clone() const {
    return new Habitat(*this);
  };

private:
  HabitatType type;
};

#endif //HABITAT_H
