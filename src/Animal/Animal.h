#ifndef ANIMAL_H
#define ANIMAL_H
#include <string>
#include "../Point/Point.h"
#include "../Renderable/Renderable.h"
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

    void setName(const string &name);

    string getDescription() const;

    void setDescription(const string &description);

    /**
     * @brief Memeriksa apakah hewan buas atau tidak.
     * @return True jika hewan adalah hewan buas dan False jika tidak.
     */
    bool isWild() const;

    void setWild(bool wild);

    Reproduction getReproduction() const;

    void setReproduction(const Reproduction &reproduction);

    SkinType getSkinType() const;

    void setSkinType(const SkinType &skinType);

    Point getPosition() const;

    void setPosition(const Point &position);

    /** @brief Melakukan interaksi dengan seekor hewan.
      * Merupakan pure virtual function.
      * @return string yang menggambarkan experience yang dapat didengar, dirasakan, atau dilihat seorang pengunjung.
      */
    virtual string interact() = 0;

protected :
    string name;
    Reproduction reproduction;
    SkinType skinType;
    string description;
    bool wild;
    Point position;
};


#endif //ANIMALIA_H
