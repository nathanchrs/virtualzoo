#ifndef WILDANIMAL_H
#define WILDANIMAL_H

#include <string>
#include "../Behaviour.h"
using namespace std;

/** @class WildAnimal.
  *  Kelas WildAnimal yang merepresentasikan hewan buas.
  */
class WildAnimal : public Behaviour {
public:
    /** @brief Constructor.
      * Menciptakan hewan buas dengan jumlah mangsa tertentu.
      */
    WildAnimal(int _numPrey);

    /** @brief Destructor.
      */
    ~WildAnimal();

    /** @brief Menambahkan nama mangsa pada daftar mangsa.
      * @param preyName Nama mangsa.
      */
    void AddPrey(const string& preyName);

    /** @brief Memeriksa apakah preyName terdapat pada preyList.
      * @param preyName Nama mangsa.
      * @return True jika preyName terdapat pada preyList dan false jika tidak.
      */
    bool isPrey(const string &preyName) const;

protected:
    string *preyList;
    const int numPrey;
};


#endif //WILDANIMAL_H
