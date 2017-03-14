#ifndef OWL_H
#define OWL_H

#include "../Aves.h"
#include "../../Diet/Carnivore/Carnivore.h"

/** @class Owl
  * Kelas Owl yang merepesentasikan burung hantu.
  */
class Owl : public Aves, public Carnivore {
public:
  /** @brief Constructor.
    * Menciptakan burung hantu.
    */
  Owl(const Point &pos, int weight, bool wild);

  /** @brief Melakukan interaksi dengan burung hantu.
    * @return Experience yang dirasakan ketika berinteraksi dengan
    * burung hantu.
    */
  string Interact() const;

  /** @brief Mengembalikan pointer ke objek baru yang dibuat secara dinamis.
    * @return Pointer ke objek yang baru dibuat.
    */
  Animal *Clone() const {
    return new Owl(*this);
  };
};


#endif //OWL_H
