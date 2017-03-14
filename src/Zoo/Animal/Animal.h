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

  string GetName() const;

  string GetDescription() const;

  bool IsValidHabitat(Habitat::HabitatType habitatType) const;

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
  bool IsPrey(const string &prey_name) const;

  Reproduction GetReproduction() const;

  SkinType GetSkinType() const;

  virtual char Render() const {
    return 'x';
  }

  Point GetPosition() const;

  void SetPosition(const Point &position);

  /** @brief Melakukan interaksi dengan seekor hewan.
    * Merupakan pure virtual function.
    * @return string yang menggambarkan experience yang dapat didengar,
    * dirasakan, atau dilihat seorang pengunjung.
    */
  virtual string Interact() const = 0;

  virtual Animal *Clone() const = 0;

  virtual bool IsCarnivore() const = 0;

  virtual bool IsHerbivore() const = 0;

  virtual bool IsOmnivore() const = 0;

  /** @brief Menghitung banyaknya daging yang dikonsumsi setiap hari relatif
   * terhadap berat badannnya.
   * @return Banyaknya daging yang dikonsumsi setiap hari.
   */
  virtual double CalculateTotalMeat() const = 0;

  /** @brief Menghitung banyaknya sayuran yang dikonsumsi setiap hari relatif
   * terhadap berat badannnya.
   * @return Banyaknya sayuran yang dikonsumsi setiap hari.
   */
  virtual double CalculateTotalVegetable() const = 0;

protected :
  string name;
  Reproduction reproduction;
  SkinType skin_type;
  string description;
  bool air_animal;
  bool land_animal;
  bool water_animal;
  bool wild;
  Array<string> prey_list;
  Point position;
};

#endif //ANIMALIA_H
