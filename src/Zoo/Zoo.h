#ifndef ZOO_H
#define ZOO_H

#include <string>

/** @class Zoo
  * Kelas Zoo yang merepresentasikan sebuah kebun binatang.
  */
class Zoo {
public:
    /** @brief Constructor.
      *
      */
    Zoo();

    /**
      *
      */
    Zoo(const Zoo&);

    /**
      *
      */
    ~Zoo();

    /**
      *
      * @return
      */
    Zoo& operator=(const Zoo&);

protected:

};

#endif //ZOO_H
