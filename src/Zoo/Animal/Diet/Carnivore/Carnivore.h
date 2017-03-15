//Author : Jordhy

#ifndef CARNIVORE_H
#define CARNIVORE_H

#include "../Diet.h"

/** @class Carnivore
  * Kelas abstrak Carnivore yang merepesentasikan hewan karnivora.
  */
class Carnivore : public Diet {
public:
  /** @brief Constructor.
    * Menciptakan hewan karnivora dengan berat tertentu.
    * @param weight Berat dari hewan.
    */
  Carnivore(int weight, double _ratio);

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

#endif //CARNIVORE_H
