//Author : Jordhy

#ifndef AVES_H
#define AVES_H

#include "../animal.h"

/** @class Aves
  * Kelas abstrak Aves yang merepesentasikan kelas hewan Aves.
  */
class Aves : public virtual Animal {
public:
  /**
   * @brief Constructor.
   * @details Menciptakan Aves yang
   * memiliki skinType "Feather" dan reproduction "Ovipar".
   * @param name Nama hewan.
   */
  Aves(const string &name);
};

#endif //AVES_H
