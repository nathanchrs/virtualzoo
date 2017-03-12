#ifndef ENTRANCE_H
#define ENTRANCE_H


#include "../Road.h"

/** @class Entrance
  * Kelas Entrance yang merepesentasikan jalan masuk.
  */
class Entrance : public Road{
public:
    /** @brief Constructor.
      * Menciptakan sebuah jalan masuk.
      */
    Entrance();

    /** @brief Destructor.
      */
    virtual ~Entrance();
};


#endif //ENTRANCE_H
