#ifndef VIRTUALZOO_ARRAY_H
#define VIRTUALZOO_ARRAY_H

#include <stdexcept>

template <typename T>
class Array {
public:

    Array();
    Array(int initialSize);
    Array(const Array &array);

    ~Array();

    Array& operator=(const Array &array);

    bool isEmpty() const { return elementCount == 0; }

    int size() const { return elementCount; }

    T& operator[](int idx);

    const T& operator[](int idx) const;

    void pushBack(const T elmt);

    T popBack();

    int find(T elmt) const;

private:
    static const int initialCapacity = 10;

    T *data;
    int elementCount;
    int capacity;
};

template<typename T>
Array<T>::Array() : Array(0) {}

template<typename T>
Array<T>::Array(int initialSize) {
    elementCount = initialSize;
    capacity = initialSize > initialCapacity ? initialSize : initialCapacity;
    data = new T[capacity];
}

template<typename T>
Array<T>::Array(const Array &array) {
    elementCount = array.elementCount;
    capacity = array.capacity;
    data = new T[capacity];
    for (int i = 0; i < elementCount; i++) {
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
        elementCount = array.elementCount;
        capacity = array.capacity;
        data = new T[capacity];
        for (int i = 0; i < elementCount; i++) {
            data[i] = array.data[i];
        }
    }
    return *this;
}

template<typename T>
T &Array<T>::operator[](int idx) {
    if (idx >= 0 && idx < elementCount) return data[idx];
    else throw std::out_of_range("Array index out of bounds.");
}

template<typename T>
const T &Array<T>::operator[](int idx) const {
    if (idx >= 0 && idx < elementCount) return data[idx];
    else throw std::out_of_range("Array index out of bounds.");
}

template<typename T>
void Array<T>::pushBack(const T elmt) {
    if (elementCount == capacity) {
        capacity *= 2; // Auto-resize on pushBack
        T *oldData = data;
        data = new T[capacity];
        for (int i = 0; i < elementCount; i++) {
            data[i] = oldData[i];
        }
        delete[] oldData;
    }
    data[elementCount] = elmt;
    elementCount++;
}

template<typename T>
T Array<T>::popBack() {
    if (!isEmpty()) {
        elementCount--;
        return data[elementCount];
    } else {
        throw "Array can't be popped because it is already empty.";
    }
}

template<typename T>
int Array<T>::find(T elmt) const {
    for (int i = 0; i < elementCount; i++) {
        if (data[i] == elmt) {
            return i;
        }
    }
    return -1;
}

#endif //VIRTUALZOO_ARRAY_H
