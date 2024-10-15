#include "Array.h"
#include <iostream>

template <typename T>
Array<T>::Array(int initialSize, int growBy) : size(initialSize), grow(growBy) {}

template <typename T>
void Array<T>::SetSize(int newSize, int growBy) {
    grow = growBy;
    size = newSize;
}

template <typename T>
int Array<T>::GetSize() const {
    return size;
}

template <typename T>
int Array<T>::GetUpperBound() const {
    return size - 1;
}

template <typename T>
bool Array<T>::IsEmpty() const {
    return size == 0;
}

template <typename T>
void Array<T>::Add(T value) {
    arrayList.addToTail(value);
    size++;
}

template <typename T>
void Array<T>::RemoveAll() {
    while (!IsEmpty()) {
        arrayList.deleteFromHead();
        size--;
    }
}

template <typename T>
void Array<T>::InsertAt(int index, T value) {}

template <typename T>
T Array<T>::GetAt(int index) const {}

template <typename T>
void Array<T>::SetAt(int index, T value) {}

template <typename T>
void Array<T>::RemoveAt(int index) {}

template <typename T>
T& Array<T>::operator[](int index) {}

template <typename T>
Array<T>& Array<T>::operator=(const Array<T>& other) {}
