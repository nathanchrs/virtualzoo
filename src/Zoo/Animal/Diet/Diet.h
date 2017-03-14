#ifndef DIET_H
#define DIET_H

#include "../Animal.h"

/** @class Diet
  * Kelas abstrak Diet yang merepesentasikan jenis makanan hewan.
  */
class Diet : public virtual Animal {
public:

  Diet(int weight, double ratio) : weight(weight), ratio(ratio) {}

  /** @brief Memeriksa apakah hewan karnivora atau tidak.
    * @return True jika hewan adalah hewan karnivora dan False jika tidak.
    */
  bool IsCarnivore() const {
    return carnivore;
  }

  /** @brief Memeriksa apakah hewan herbivora atau tidak.
    * @return True jika hewan adalah hewan herbivora dan False jika tidak.
    */
  bool IsHerbivore() const {
    return herbivore;
  };

  /** @brief Memeriksa apakah hewan omnivora atau tidak.
    * @return True jika hewan adalah hewan omnivora dan False jika tidak.
    */
  bool IsOmnivore() const {
    return carnivore && herbivore;
  };

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
