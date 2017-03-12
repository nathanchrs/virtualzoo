#ifndef EXIT_H
#define EXIT_H


#include "../Road.h"

/** @class Exit
  * Kelas Exit yang merepesentasikan jalan keluar.
  */
class Exit : public Road{
public:
    /** @brief Constructor.
      * Menciptakan sebuah jalan keluar.
      */
    Exit();

    /** @brief Destructor.
      */
    virtual ~Exit();
};


#endif //EXIT_H
