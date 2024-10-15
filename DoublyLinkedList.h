#pragma once
#ifndef DOUBLYLINKEDLIST_H
#define DOUBLYLINKEDLIST_H

template <typename T>
class Node {
public:
    T data;
    Node<T>* next;
    Node<T>* prev;

    Node(T value);
};

template <typename T>
class DoublyLinkedList {
private:
    Node<T>* head;
    Node<T>* tail;

public:
    DoublyLinkedList();
    void addToTail(T value);
    void deleteFromHead();
    Node<T>* clone() const;
    DoublyLinkedList<T> operator+(const DoublyLinkedList<T>& other);
    DoublyLinkedList<T> operator*(const DoublyLinkedList<T>& other);

    bool contains(T value) const;
    void printList() const;
};

#include "DoublyLinkedList.cpp"

#endif
