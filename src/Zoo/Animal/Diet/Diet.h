//Author : Jordhy
//Implementor : Alvin

#ifndef DIET_H
#define DIET_H

#include "../Animal.h"

/** @class Diet
  * Kelas abstrak Diet yang merepesentasikan jenis makanan hewan.
  */
class Diet : public virtual Animal {
public:

  Diet(int weight, double ratio) : weight(weight), ratio(ratio) {}

  /** @brief Menghitung banyaknya daging yang dikonsumsi setiap hari relatif terhadap berat badannnya.
    * Kelas virtual
    * @return Banyaknya daging yang dikonsumsi setiap hari.
    */
  virtual double CalculateTotalMeat() const = 0;

  /** @brief Menghitung banyaknya sayuran yang dikonsumsi setiap hari relatif terhadap berat badannnya.
    * Kelas virtual
    * @return Banyaknya sayuran yang dikonsumsi setiap hari.
    */
  virtual double CalculateTotalVegetable() const = 0;

protected:
  int weight;
  double ratio;
  bool carnivore;
  bool herbivore;
};

#endif //DIET_H
