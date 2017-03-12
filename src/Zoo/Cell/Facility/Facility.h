#ifndef FACILITY_H
#define FACILITY_H


#include "../Cell.h"

/** @class Facility
  * Kelas abstrak Facility yang merepesentasikan petak tanah berukuran 1m x 1m yang merupakan fasilitas.
  */
class Facility : public Cell {
public:
    /** @brief Constructor.
      * Menciptakan sebuah fasilitas dengan status aksesibilitas dan jenis tertentu.
      * @param _accessible Status aksesibiltas fasilitas.
      * @param _facilityType Jenis dari fasilitas.
      */
    Facility(bool _accessible, char _facilityType);

    /** @brief Destructor.
      */
    virtual ~Facility();

protected:
  char facilityType;
};


#endif //FACILITY_H
