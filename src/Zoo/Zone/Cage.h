#ifndef CAGE_H
#define CAGE_H

#include <exception>
#include "Zone.h"
#include "../Animal/Animal.h"

/**
 * Exception yang akan di-throw jika mencoba menambahkan hewan melebihi kapasitas kandang.
 */
class CageExceedsCapacityException : public std::exception {};

/** @class Cage
  * Kelas Cage yang merepesentasikan kandang.
  */
class Cage : public Zone {
public:
    /** @brief Constructor.
      * Menciptakan sebuah kandang dengan ukuran tertentu dengan jumlah kapasitas hewan maksimal 30% dari ukuran kandang.
      * Daftar cell hewan di dalam kandang pada awalnya kosong.
      * @param name Nama kandang
      */
    Cage(string name) : Zone(name) {};

    /** @brief Menambahkan seekor hewan ke dalam kandang, jika kandang belum penuh.
      * @param animal Pointer dari hewan yang dimasukkan ke dalam kandang.
      * @throws CageExceedsCapacityException
      */
    void addAnimal(Animal *animal) {
        if (!isFull()) {
            animals.PushBack(animal);
        } else {
            throw CageExceedsCapacityException();
        }
    };

    const Array<Animal*> &getAnimals() const {
        return animals;
    }

    /**
     * @brief Mengembalikan jumlah hewan yang berada dalam kandang.
     * @return Jumlah hewan dalam kandang.
     */
    int animalCount() const {
        return animals.Size();
    }

    /** @brief Memeriksa apakah jumlah hewan di dalam kandang sudah mencapai kapasitas (30% ukuran kandang) atau belum.
      * @return True jika jumlah hewan sudah mencapai kapasitas kandang dan false jika belum.
      */
    bool isFull() const {
        return animals.Size() >= (0.3 * size());
    };

    Zone* clone() const {
        return new Cage(*this);
    };

private:
    Array<Animal*> animals;
};

#endif //CAGE_H
