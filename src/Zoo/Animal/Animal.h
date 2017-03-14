#ifndef ANIMAL_H
#define ANIMAL_H
#include <string>
#include "../../Renderer/Point.h"
#include "../../Renderer/Renderable.h"
#include "../Cell/Habitat.h"
#include "../../Array/Array.h"

using namespace std;

/** @class Animal
  * Kelas abstrak Animal yang merepesentasikan seekor hewan.
  */
class Animal : public Renderable {
public:

    enum Reproduction { Ovipar, Vivipar, Ovovivipar };
    enum SkinType { Feather, Fur, Scales };

    string getName() const;

    string getDescription() const;

    /** @brief Memeriksa apakah hewan adalah hewan udara atau tidak.
      * @return True jika hewan adalah hewan udara dan False jika tidak.
      */
    bool isAirAnimal();

    /** @brief Memeriksa apakah hewan adalah hewan darat atau tidak.
      * @return True jika hewan adalah hewan darat dan False jika tidak.
      */
    bool isLandAnimal();

    /** @brief Memeriksa apakah hewan adalah hewan air atau tidak.
      * @return True jika hewan adalah hewan air dan False jika tidak.
      */
    bool isWaterAnimal();

    bool isValidHabitat(Habitat::HabitatType habitatType) const;

    /** @brief Memeriksa apakah hewan buas atau tidak.
      * @return True jika hewan adalah hewan buas dan False jika tidak.
      */
    bool IsWild() const;

    /** @brief Menambahkan nama mangsa pada daftar mangsa.
      * @param preyName Nama mangsa.
      */
    void AddPrey(const string &prey_name);

    /** @brief Memeriksa apakah preyName terdapat pada preyList.
      * @param preyName Nama mangsa.
      * @return True jika preyName terdapat pada preyList dan false jika tidak.
      */
    bool isPrey(const string &prey_name) const;

    Reproduction getReproduction() const;

    SkinType getSkinType() const;

    virtual char render() const {
        return 'x';
    }

    Point getPosition() const;

    void setPosition(const Point &position);

    /** @brief Melakukan interaksi dengan seekor hewan.
      * Merupakan pure virtual function.
      * @return string yang menggambarkan experience yang dapat didengar, dirasakan, atau dilihat seorang pengunjung.
      */
    virtual string interact() const = 0;

    virtual Animal* clone() const = 0;

    virtual bool IsCarnivore() const = 0;
    virtual bool IsHerbivore() const = 0;
    virtual bool IsOmnivore() const = 0;
    /** @brief Menghitung banyaknya daging yang dikonsumsi setiap hari relatif terhadap berat badannnya.
      * Kelas virtual
      * @return Banyaknya daging yang dikonsumsi setiap hari.
      */
    virtual int calculateTotalMeat() const = 0;

    /** @brief Menghitung banyaknya sayuran yang dikonsumsi setiap hari relatif terhadap berat badannnya.
      * Kelas virtual
      * @return Banyaknya sayuran yang dikonsumsi setiap hari.
      */
    virtual int calculateTotalVegetable() const = 0;
protected :
    string name;
    Reproduction reproduction;
    SkinType skinType;
    string description;
    bool airAnimal;
    bool landAnimal;
    bool waterAnimal;
    bool wild;
    Array<string> prey_list;
    Point position;
};

#endif //ANIMALIA_H
