#pragma once
#ifndef QUEUE_H
#define QUEUE_H

#include "DoublyLinkedList.h"

template <typename T>
class Queue {
private:
    DoublyLinkedList<T> list;

public:
    Queue() = default;
    void enqueue(T value);
    void dequeue();
    void printQueue() const;
};

#include "Queue.cpp"

#endif
