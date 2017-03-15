//Author : Jordhy

#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>
#include "../../renderer/point.h"
#include "../../renderer/renderable.h"
#include "../cell/habitat.h"
#include "../../array/array.h"

using namespace std;

/** @class Animal
  * Kelas abstrak Animal yang merepesentasikan seekor hewan.
  */
class Animal : public Renderable {
public:

  /** @enum Reproduction
    * Jenis-jenis hewan menurut cara reproduksi.
    */
  enum Reproduction { Ovipar, Vivipar, Ovovivipar };

  /** @enum SkinType
    * Jenis-jenis hewan menurut jenis penutup kulit.
    */
  enum SkinType { Feather, Fur, Scales };

  /** @brief Mengembalikan nama hewan.
    * @return Nama hewan.
    */
  string GetName() const {
    return name;
  }

  /** @brief Mengembalikan deskripsi hewan.
    * @return Deskripsi hewan.
    */
  string GetDescription() const {
    return description;
  }

  /** @brief Mengecek apakah hewan ini cocok dengan habitat tertentu.
    * @param habitat_type Habitat yang akan dicek kecocokannya.
    * @return True jika cocok, false jika tidak.
    */
  bool IsValidHabitat(Habitat::HabitatType habitat_type) const;

  /** @brief Memeriksa apakah hewan buas atau tidak.
    * @return True jika hewan adalah hewan buas dan False jika tidak.
    */
  bool IsWild() const {
    return wild;
  }

  /** @brief Menambahkan nama mangsa pada daftar mangsa.
    * @param preyName Nama mangsa.
    */
  void AddPrey(const string &prey_name);

  /** @brief Memeriksa apakah preyName terdapat pada preyList.
    * @param preyName Nama mangsa.
    * @return True jika preyName terdapat pada preyList dan false jika tidak.
    */
  bool IsPrey(const string &prey_name) const;

  /** @brief Mengembalikan cara reproduksi hewan.
    * @return Cara reproduksi hewan.
    */
  Reproduction GetReproduction() const {
    return reproduction;
  }

  /** @brief Mengembalikan jenis kulit hewan.
    * @return Jenis kulit hewan.
    */
  SkinType GetSkinType() const {
    return skin_type;
  }

  /** @brief Mengembalikan posisi hewan.
    * @return Posisi hewan.
    */
  Point GetPosition() const {
    return position;
  }

  /** @brief Mengeset posisi hewan.
    * @param position Posisi baru hewan
    */
  void SetPosition(const Point &position) {
    Animal::position = position;
  }

  /** @brief Mengembalikan char yang merepresentasikan hewan.
    * @return Sebuah char yang merepresentasikan hewan.
    */
  virtual char Render() const {
    return 'x';
  }

  /** @brief Melakukan interaksi dengan seekor hewan.
    * @details Merupakan pure virtual function.
    * @return string yang menggambarkan experience yang dapat didengar,
    * dirasakan, atau dilihat seorang pengunjung.
    */
  virtual string Interact() const = 0;

  /** @brief Mengembalikan pointer ke objek baru yang dibuat secara dinamis.
    * @return Pointer ke objek yang baru dibuat.
    */
  virtual Animal *Clone() const = 0;

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
