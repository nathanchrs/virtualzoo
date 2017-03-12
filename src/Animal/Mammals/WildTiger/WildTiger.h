#ifndef WILDTIGER_H
#define WILDTIGER_H

#include "../Mammals.h"
#include "../../Diet/Carnivore/Carnivore.h"
#include "../../Behaviour/WildAnimal/WildAnimal.h"

/** @class WildTiger
  * Kelas WildTiger yang merepesentasikan harimau yang buas.
  */
class WildTiger : public Mammals, public Carnivore, public WildAnimal{
public:
    /** @brief Constructor.
      * Menciptakan harimau yang buas beserta daftar mangsanya.
      */
    WildTiger(int _weight);

    /** @brief Melakukan interaksi dengan harimau yang buas.
      * @return Experience yang dirasakan ketika berinteraksi dengan harimau yang buas.
      */
    string interact() const;
};


#endif //WILDTIGER_H
