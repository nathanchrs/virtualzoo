#ifndef HERBIVORE_H
#define HERBIVORE_H

#include "../Diet.h"

class Herbivore : public Diet {
public:
    /** @brief Constructor.
      * Menciptakan hewan herbivora dengan berat tertentu.
      * @param _weight Berat dari hewan.
      */
    Herbivore(int _weight, double _ratio);

    /** @brief Menghitung banyaknya daging yang dikonsumsi setiap hari relatif terhadap berat badannnya.
      * @return Banyaknya daging yang dikonsumsi setiap hari.
      */
    int calculateTotalMeat() const;

    /** @brief Menghitung banyaknya sayuran yang dikonsumsi setiap hari relatif terhadap berat badannnya.
      * @return Banyaknya sayuran yang dikonsumsi setiap hari.
      */
    int calculateTotalVegetable() const;
};

#endif //HERBIVORE_H
