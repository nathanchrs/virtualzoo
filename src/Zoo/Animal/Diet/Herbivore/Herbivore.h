#ifndef HERBIVORE_H
#define HERBIVORE_H

#include "../Diet.h"


/** @class Herbivore
  * Kelas abstrak Herbivore yang merepesentasikan hewan karnivora.
  */
class Herbivore : public Diet {
public:
  /** @brief Constructor.
    * Menciptakan hewan herbivora dengan berat tertentu.
    * @param weight Berat dari hewan.
    */
  Herbivore(int weight, double ratio);

  /** @brief Menghitung banyaknya daging yang dikonsumsi setiap hari relatif
   * terhadap berat badannnya.
   * @return Banyaknya daging yang dikonsumsi setiap hari.
   */
  double CalculateTotalMeat() const;

  /** @brief Menghitung banyaknya sayuran yang dikonsumsi setiap hari relatif
   * terhadap berat badannnya.
   * @return Banyaknya sayuran yang dikonsumsi setiap hari.
   */
  double CalculateTotalVegetable() const;
};

#endif //HERBIVORE_H
