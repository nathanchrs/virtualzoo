#ifndef KOMODODRAGON_H
#define KOMODODRAGON_H

/** @class KomodoDragon
  * Kelas KomodoDragon yang merepesentasikan komodo.
  */
class KomodoDragon {
public:
    /** @brief Constructor.
      * Menciptakan komodo.
      */
    KomodoDragon(int _weight);

    /** @brief Melakukan interaksi dengan komodo.
      * @return Experience yang dirasakan ketika berinteraksi dengan komodo.
      */
    string Interact();
};


#endif //KOMODODRAGON_H
