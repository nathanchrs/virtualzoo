#ifndef DIET_H
#define DIET_H

/** @class Diet
  * Kelas abstrak Diet yang merepesentasikan jenis makanan hewan.
  */
class Diet {
public:

    Diet(int _weight, double _ratio);

    /** @brief Memeriksa apakah hewan karnivora atau tidak.
      * @return True jika hewan adalah hewan karnivora dan False jika tidak.
      */
    bool IsCarnivore() const;

    /** @brief Memeriksa apakah hewan herbivora atau tidak.
      * @return True jika hewan adalah hewan herbivora dan False jika tidak.
      */
    bool IsHerbivore() const;

    /** @brief Memeriksa apakah hewan omnivora atau tidak.
      * @return True jika hewan adalah hewan omnivora dan False jika tidak.
      */
    bool IsOmnivore() const;

    /** @brief Menghitung banyaknya daging yang dikonsumsi setiap hari relatif terhadap berat badannnya.
      * Kelas virtual
      * @return Banyaknya daging yang dikonsumsi setiap hari.
      */
    virtual int calculateTotalMeat() const = 0;

    /** @brief Menghitung banyaknya sayuran yang dikonsumsi setiap hari relatif terhadap berat badannnya.
      * Kelas virtual
      * @return Banyaknya sayuran yang dikonsumsi setiap hari.
      */
    virtual int calculateTotalVegetable() const = 0;

protected:
    int weight;
    double ratio;
    bool carnivore;
    bool herbivore;
};

#endif //DIET_H
