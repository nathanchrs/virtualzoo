//
// Created by nim_13515004 on 11/03/17.
//

#ifndef OMNIVORE_H
#define OMNIVORE_H


#include "../Diet.h"

class Omnivore : public Diet{
public:

    /** @brief Constructor.
      * Menciptakan hewan omnivora dengan berat tertentu.
      * @param _weight Berat dari hewan.
      */
    Omnivore(int _weight, double _ratio);

    /** @brief Menghitung banyaknya daging yang dikonsumsi setiap hari relatif terhadap berat badannnya.
      * @return Banyaknya daging yang dikonsumsi setiap hari.
      */
    double calculateTotalMeat() const;

    /** @brief Menghitung banyaknya sayuran yang dikonsumsi setiap hari relatif terhadap berat badannnya.
      * @return Banyaknya sayuran yang dikonsumsi setiap hari.
      */
    double calculateTotalVegetable() const;
};


#endif //OMNIVORE_H
