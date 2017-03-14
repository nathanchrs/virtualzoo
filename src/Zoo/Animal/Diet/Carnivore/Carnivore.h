#ifndef CARNIVORE_H
#define CARNIVORE_H

#include "../Diet.h"

class Carnivore : public Diet {
public:
    /** @brief Constructor.
      * Menciptakan hewan karnivora dengan berat tertentu.
      * @param _weight Berat dari hewan.
      */
    Carnivore(int _weight, double _ratio);

    /** @brief Menghitung banyaknya daging yang dikonsumsi setiap hari relatif terhadap berat badannnya.
      * @return Banyaknya daging yang dikonsumsi setiap hari.
      */
    double calculateTotalMeat() const;

    /** @brief Menghitung banyaknya sayuran yang dikonsumsi setiap hari relatif terhadap berat badannnya.
      * @return Banyaknya sayuran yang dikonsumsi setiap hari.
      */
    double calculateTotalVegetable() const;
};

#endif //CARNIVORE_H
