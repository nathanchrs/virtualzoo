#ifndef OMNIVORE_H
#define OMNIVORE_H

#include "../Diet.h"

/** @class Omnivore
  * Kelas abstrak Omnivore yang merepesentasikan hewan omnivora.
  */
class Omnivore : public Diet {
public:

  /** @brief Constructor.
    * Menciptakan hewan omnivora dengan berat tertentu.
    * @param weight Berat dari hewan.
    */
  Omnivore(int weight, double ratio);

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

#endif //OMNIVORE_H
