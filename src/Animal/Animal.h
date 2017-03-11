#ifndef ANIMAL_H
#define ANIMAL_H
#include <string>
using namespace std;

/** @class Animal
  * Kelas abstrak Animal yang merepesentasikan seekor hewan.
  */
class Animal {
public:
    /** @brief Melakukan interaksi dengan seekor hewan.
      * Merupakan pure virtual function.
      * @return string yang menggambarkan experience yang dapat didengar, dirasakan, atau dilihat seorang pengunjung.
      */
    virtual string interact() = 0;

   /** @brief Bergerak ke posisi lain.
     * @param x Nilai perubahan absis.
     * @param y Nilai perubahan ordinat.
     */
    void move(int x, int y);

    /** @brief Memeriksa apakah hewan buas atau tidak.
      * @return True jika hewan adalah hewan buas dan False jika tidak.
      */
    bool IsWild();

    /** @brief Memeriksa apakah hewan adalah hewan darat atau tidak.
      * @return True jika hewan adalah hewan darat dan False jika tidak.
      */
    bool IsLandAnimal();

    /** @brief Memeriksa apakah hewan adalah hewan air atau tidak.
      * @return True jika hewan adalah hewan air dan False jika tidak.
      */
    bool IsWaterAnimal();

    /** @brief Memeriksa apakah hewan adalah hewan udara atau tidak.
      * @return True jika hewan adalah hewan udara dan False jika tidak.
      */
    bool isAirAnimal();

protected :
    string name;
    string reproduction;
    string description;
    string skinType;
    bool wild;
    bool landAnimal;
    bool waterAnimal;
    bool airAnimal;
    Point position;
};

#endif //ANIMALIA_H
