#ifndef ANIMAL_H
#define ANIMAL_H
#include <string>
#include "../../Renderer/Point.h"
#include "../../Renderer/Renderable.h"
#include "../Cell/Habitat.h"

using namespace std;

/** @class Animal
  * Kelas abstrak Animal yang merepesentasikan seekor hewan.
  */
class Animal : public Renderable {
public:

    enum Reproduction { Ovipar, Vivipar, Ovovivipar };
    enum SkinType { Feather, Fur, Scales };

    Animal(const string &name);

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

    Reproduction getReproduction() const;

    SkinType getSkinType() const;

    virtual char render() const {
        return 'a';
    }

    Point getPosition() const;

    void setPosition(const Point &position);

    /** @brief Melakukan interaksi dengan seekor hewan.
      * Merupakan pure virtual function.
      * @return string yang menggambarkan experience yang dapat didengar, dirasakan, atau dilihat seorang pengunjung.
      */
    virtual string interact() const = 0;

    virtual Animal* clone() const = 0;

protected :
    string name;
    Reproduction reproduction;
    SkinType skinType;
    string description;
    bool airAnimal;
    bool landAnimal;
    bool waterAnimal;
    Point position;
};

#endif //ANIMALIA_H
