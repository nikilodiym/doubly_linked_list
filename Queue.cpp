#include "Queue.h"
#include <iostream>

template <typename T>
void Queue<T>::enqueue(T value) {
    list.addToTail(value);
}

template <typename T>
void Queue<T>::dequeue() {
    list.deleteFromHead();
}

template <typename T>
void Queue<T>::printQueue() const {
    list.printList();
}
