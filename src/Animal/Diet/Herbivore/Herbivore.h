#ifndef HERBIVORE_H
#define HERBIVORE_H

#include "../Diet.h"

class Herbivore : public Diet {
public:
    /** @brief Constructor.
      * Menciptakan hewan herbivora dengan berat tertentu.
      * @param _weight Berat dari hewan.
      */
    Herbivore(int _weight);

    /** @brief Menghitung banyaknya makanan yang dikonsumsi setiap hari relatif terhadap berat badannnya.
      * @return Banyaknya makanan yang dikonsumsi setiap hari.
      */
    int calculateTotalFood() const;

};

#endif //HERBIVORE_H
