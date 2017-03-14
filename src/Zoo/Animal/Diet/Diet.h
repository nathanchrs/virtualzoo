#ifndef DIET_H
#define DIET_H

#include "../Animal.h"

/** @class Diet
  * Kelas abstrak Diet yang merepesentasikan hewan berdasarkan makanannya.
  */
class Diet : public virtual Animal {
public:

  /** @brief Constructor.
    * Menciptakan hewan dengan berat tertentu dan perbandingan berat terhadap
    * jumlah makanannya.
    * @param weight Berat hewan.
    * @param ratio Perbandingan berat terhadap jumlah makanan hewan.
    */
  Diet(int weight, double ratio) : weight(weight), ratio(ratio) {}

  /** @brief Menghitung banyaknya daging yang dikonsumsi
    * setiap hari relatif terhadap berat badannnya.
    * @details Merupakan pure virtual function.
    * @return Banyaknya daging yang dikonsumsi setiap hari.
    */
  virtual double CalculateTotalMeat() const = 0;

  /** @brief Menghitung banyaknya sayuran yang dikonsumsi
    * setiap hari relatif terhadap berat badannnya.
    * @details Merupakan pure virtual function.
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
