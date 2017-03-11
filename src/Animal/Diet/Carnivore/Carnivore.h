//
// Created by nim_13515004 on 11/03/17.
//

#ifndef CARNIVORE_H
#define CARNIVORE_H

#include "../Diet.h"

class Carnivore : public Diet {
public:
    /** @brief Constructor.
      * Menciptakan hewan karnivora dengan berat tertentu.
      * @param _weight Berat dari hewan.
      */
    Carnivore(int _weight);

    /** @brief Menghitung banyaknya makanan yang dikonsumsi setiap hari relatif terhadap berat badannnya.
      * @return Banyaknya makanan yang dikonsumsi setiap hari.
      */
    int GetTotalFood();
};

#endif //CARNIVORE_H
