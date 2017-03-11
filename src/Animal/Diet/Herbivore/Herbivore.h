//
// Created by nim_13515004 on 11/03/17.
//

#ifndef HERBIVORE_H
#define HERBIVORE_H


#include "../Diet.h"

class Herbivore : public Diet{
public:
    /** @brief Constructor.
      * Menciptakan hewan herbivora dengan berat tertentu.
      * @param _weight Berat dari hewan.
      */
    Herbivore(int _weight);

    /** @brief Menghitung banyaknya makanan yang dikonsumsi setiap hari relatif terhadap berat badannnya.
      * @return Banyaknya makanan yang dikonsumsi setiap hari.
      */
    int GetTotalFood();
};


#endif //HERBIVORE_H
