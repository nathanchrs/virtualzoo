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
};


#endif //OMNIVORE_H
