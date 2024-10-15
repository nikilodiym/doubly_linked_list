#pragma once
#ifndef ARRAY_H
#define ARRAY_H

#include "DoublyLinkedList.h"

template <typename T>
class Array {
private:
    DoublyLinkedList<T> arrayList;
    int size;
    int grow;

public:
    Array(int initialSize = 0, int growBy = 1);

    void SetSize(int newSize, int growBy = 1);
    int GetSize() const;
    int GetUpperBound() const;
    bool IsEmpty() const;
    void Add(T value);
    void RemoveAll();
    void InsertAt(int index, T value);
    T GetAt(int index) const;
    void SetAt(int index, T value);
    void RemoveAt(int index);

    T& operator[](int index);
    Array<T>& operator=(const Array<T>& other);
};

#include "Array.cpp"

#endif
