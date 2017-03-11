//
// Created by nim_13515004 on 11/03/17.
//

#ifndef DIET_H
#define DIET_H

/** @class Diet
  * Kelas abstrak Diet yang merepesentasikan jenis makanan hewan.
  */
class Diet{
public:
    /** @brief Memeriksa apakah hewan karnivora atau tidak.
      * @return True jika hewan adalah hewan karnivora dan False jika tidak.
      */
    bool isCarnivore();

    /** @brief Memeriksa apakah hewan herbivora atau tidak.
      * @return True jika hewan adalah hewan herbivora dan False jika tidak.
      */
    bool isHerbivore();

    /** @brief Memeriksa apakah hewan omnivora atau tidak.
      * @return True jika hewan adalah hewan omnivora dan False jika tidak.
      */
    bool isOmnivore();

    /** @brief Menghitung banyaknya makanan yang dikonsumsi setiap hari relatif terhadap berat badannnya.
      * Merupakan pure virtual function.
      * @return Banyaknya makanan yang dikonsumsi setiap hari.
      */
    virtual int GetTotalFood() = 0;

protected:
    int weight;
    bool carnivore;
    bool herbivore;
};

#endif //DIET_H
