#ifndef ARRAY_H
#define ARRAY_H

#include <stdexcept>

/** @class Array
  * Kelas Array dinamik (ukurannya dapat berubah-ubah) yang generik.
  */
template<typename T>
class Array {
public:
  /** @brief Constructor.
    * @details Menciptakan sebuah array dinamik baru dengan ukuran awal nol.
    * Mengalokasikan memori awal sebesar initial_capacity.
    */
  Array();

  /** @brief Constructor.
    * @details Menciptakan sebuah array dinamik baru
    * dengan ukuran awal (jumlah elemen) sebesar initial_size.
    * Mengalokasikan memori awal sebesar initial_size
    * jika initial_size lebih besar dari initial_capacity
    * dan mengalokasikan sebesar initial_capacity jika tidak.
    * @param initial_size Nilai ukuran awal array dinamik yang ingin dibuat.
    */
  Array(int initial_size);

  /** @brief Copy Constructor.
    * @details Menjamin terbentuk array dinamik
    * dengan data di-deep-copy (bukan bitwise copy) dari array dinamik lain.
    * @param array array dinamik yang disalin.
    */
  Array(const Array &array);

  /** @brief Destructor.
    * @details Mengembalikan memori yang dialokasi oleh constructor.
    */
  ~Array();

  /** @brief Operator=.
    * @details Menjamin data di-deep-copy (bukan bitwise copy) dari array lain.
    * @param array array dinamik yang dicopy.
    * @return Reference ke operan kiri (objek yang memanggil operator=).
    */
  Array &operator=(const Array &array);

  /** @brief Memeriksa apakah array dinamik kosong atau tidak.
    * @details array dinamik yang kosong adalah array dinamik dengan ukuran 0.
    * @return True jika array dinamik kosong dan false jika tidak.
    */
  bool IsEmpty() const { return element_count == 0; }

  /** @brief Mengembalikan ukuran (jumlah elemen) dari array dinamik.
    * @return Ukuran (jumlah elemenn) array dinamik.
    */
  int Size() const { return element_count; }

  /** @brief operator[].
    * @details Mengakses data array dinamik pada indeks idx sebagai lvalue.
    * Menghasilkan exception jika mengakses indeks di luar batas.
    * @param idx Nilai indeks array dinamik tempat yang ingin diakses.
    * @return Reference ke data dengan indeks idx.
    */
  T &operator[](int idx);

  /** @brief operator[].
    * @details Mengakses data array dinamik pada indeks idx sebagai rvalue.
    * Menghasilkan exception jika mengakses indeks di luar batas.
    * @param idx Nilai indeks array dinamik tempat yang ingin diakses.
    * @return Reference ke data dengan indeks idx.
    */
  const T &operator[](int idx) const;

  /** @brief Menambahkan elemen baru ke dalam array dinamik.
    * @details Memperbesar ukuran (jumlah elemen) array dinamik sebesar 1
    * dan menambahkan elemen baru pada indeks paling akhir.
    * Jika kapasitas memori array dinamik penuh,
    * kapasitas array dinamik akan diperbesar (melakukan alokasi kembali).
    * @param elmt Nilai elemen yang ingin ditambahkan ke dalam array dinamik.
    */
  void PushBack(const T elmt);

  /** @brief Menghapus elemen array dinamik yang terletak pada indeks terakhir.
    * @details Menghasilkan exception jika array dinamik kosong.
    * @return Nilai elemen yang dihapus (dikeluarkan) dari array dinamik.
    */
  T PopBack();

  /** @brief Mencari elemen dengan nilai tertentu pada array dinamik.
    * @details Pencarian dilakukan dari indeks terkecil.
    * @param elmt Nilai elemen yang ingin dicari pada array dinamik.
    * @return Hasil pencarian berupa indeks terkecil tempat nilai elmt
    * pertama kali ditemukan.
    * Jika tidak ada, mengembalikan -1.
    */
  int Find(T elmt) const;

private:
  /** @brief Ukuran awal alokasi memori.
    */
  static const int initial_capacity = 10;

  /** @brief Elemen pada array dinamik.
    */
  T *data;

  /** @brief Ukuran array dinamik.
    */
  int element_count;

  /** @brief Ukuran (banyaknya) alokasi memori.
    */
  int capacity;
};

template<typename T>
Array<T>::Array() : Array(0) {}

template<typename T>
Array<T>::Array(int initial_size) {
  element_count = initial_size;
  capacity = initial_size > initial_capacity ? initial_size : initial_capacity;
  data = new T[capacity];
}

template<typename T>
Array<T>::Array(const Array &array) {
  element_count = array.element_count;
  capacity = array.capacity;
  data = new T[capacity];
  for (int i = 0; i < element_count; i++) {
    data[i] = array.data[i];
  }
}

template<typename T>
Array<T>::~Array() {
  delete[] data;
}

template<typename T>
Array<T> &Array<T>::operator=(const Array<T> &array) {
  if (&array != this) {
    delete[] data;
    element_count = array.element_count;
    capacity = array.capacity;
    data = new T[capacity];
    for (int i = 0; i < element_count; i++) {
      data[i] = array.data[i];
    }
  }
  return *this;
}

template<typename T>
T &Array<T>::operator[](int idx) {
  if (idx >= 0 && idx < element_count) return data[idx];
  else throw std::out_of_range("Array index out of bounds.");
}

template<typename T>
const T &Array<T>::operator[](int idx) const {
  if (idx >= 0 && idx < element_count) return data[idx];
  else throw std::out_of_range("Array index out of bounds.");
}

template<typename T>
void Array<T>::PushBack(const T elmt) {
  if (element_count == capacity) {
    capacity *= 2; // Auto-resize on pushBack
    T *oldData = data;
    data = new T[capacity];
    for (int i = 0; i < element_count; i++) {
      data[i] = oldData[i];
    }
    delete[] oldData;
  }
  data[element_count] = elmt;
  element_count++;
}

template<typename T>
T Array<T>::PopBack() {
  if (!IsEmpty()) {
    element_count--;
    return data[element_count];
  } else {
    throw "Array can't be popped because it is already empty.";
  }
}

template<typename T>
int Array<T>::Find(T elmt) const {
  for (int i = 0; i < element_count; i++) {
    if (data[i] == elmt) {
      return i;
    }
  }
  return -1;
}


#endif //ARRAY_H
