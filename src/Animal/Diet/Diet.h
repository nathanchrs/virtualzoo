#ifndef DIET_H
#define DIET_H

/** @class Diet
  * Kelas abstrak Diet yang merepesentasikan jenis makanan hewan.
  */
class Diet {
public:

    Diet(int _weight);

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

    /** @brief Menghitung banyaknya makanan yang dikonsumsi setiap hari relatif terhadap berat badannnya.
      * Merupakan pure virtual function.
      * @return Banyaknya makanan yang dikonsumsi setiap hari.
      */
    virtual int calculateTotalFood() const = 0;

protected:
    int weight;
    bool carnivore;
    bool herbivore;
};

#endif //DIET_H
