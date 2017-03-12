#ifndef CAGE_H
#define CAGE_H

#include "../../Renderer/Renderable.h"
#include "../Cell/Habitat/Habitat.h"
#include "../Animal/Animal.h"

/** @class Cage
  * Kelas Cage yang merepesentasikan kandang.
  */
class Cage : public Renderable{
public:
    /** @brief Constructor.
      * Menciptakan sebuah kandang dengan ukuran tertentu dengan jumlah kapasitas hewan maksimal 30% dari ukuran kandang.
      * Jumlah hewan di dalam kandang diinisialisasi dengan nol.
      * @param _size Nilai ukuran kandang.
      */
    Cage(int _size);

    /** @brief Destructor.
      */
    ~Cage();

    /** @brief Menambahkan seekor hewan ke dalam kandang.
      * Kandang tidak berada dalam keaddan penuh.
      * @param _animal Hewan yang dimasukkan ke dalam kandang.
      */
    void addAnimal(Animal *_animal);

    /** @brief Menambahkan sebuah habitat ke dalam kandang.
      * @param _habitat Habitat yang berada di dalam kandang.
      */
    void addHabitat(Habitat *_habitat);

    /** @brief Memeriksa apakah jumlah hewan di dalam kandang sudah mencapai kapasitas atau belum.
      * @return True jika jumlah hewan sudah mencapai kapasitas kandang dan false jika belum.
      */
    bool isFull() const;

    /** @brief Menampilkan kandang ke console teks.
      */
    void render();

private:
    Habitat **habitats;
    Animal **animals;
    int numOfAnimals;
    int numOfHabitats;
    const int size;
    const int capacity;
};


#endif //CAGE_H
