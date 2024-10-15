#include "DoublyLinkedList.h"
#include <iostream>

using namespace std;

template <typename T>
Node<T>::Node(T value) : data(value), next(nullptr), prev(nullptr) {}

template <typename T>
DoublyLinkedList<T>::DoublyLinkedList() : head(nullptr), tail(nullptr) {}

template <typename T>
void DoublyLinkedList<T>::addToTail(T value) {
    Node<T>* newNode = new Node<T>(value);
    if (!head) {
        head = tail = newNode;
    }
    else {
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
}

template <typename T>
void DoublyLinkedList<T>::deleteFromHead() {
    if (!head) return;
    Node<T>* temp = head;
    head = head->next;
    if (head) head->prev = nullptr;
    delete temp;
}

template <typename T>
Node<T>* DoublyLinkedList<T>::clone() const {
    if (!head) return nullptr;

    Node<T>* newHead = new Node<T>(head->data);
    Node<T>* current = head->next;
    Node<T>* newCurrent = newHead;

    while (current) {
        Node<T>* newNode = new Node<T>(current->data);
        newCurrent->next = newNode;
        newNode->prev = newCurrent;
        newCurrent = newNode;
        current = current->next;
    }

    return newHead;
}

template <typename T>
DoublyLinkedList<T> DoublyLinkedList<T>::operator+(const DoublyLinkedList<T>& other) {
    DoublyLinkedList<T> result;

    Node<T>* temp = this->head;
    while (temp) {
        result.addToTail(temp->data);
        temp = temp->next;
    }

    temp = other.head;
    while (temp) {
        result.addToTail(temp->data);
        temp = temp->next;
    }

    return result;
}

template <typename T>
DoublyLinkedList<T> DoublyLinkedList<T>::operator*(const DoublyLinkedList<T>& other) {
    DoublyLinkedList<T> result;
    Node<T>* temp = this->head;

    while (temp) {
        if (other.contains(temp->data)) {
            result.addToTail(temp->data);
        }
        temp = temp->next;
    }

    return result;
}

template <typename T>
bool DoublyLinkedList<T>::contains(T value) const {
    Node<T>* temp = head;
    while (temp) {
        if (temp->data == value) return true;
        temp = temp->next;
    }
    return false;
}

template <typename T>
void DoublyLinkedList<T>::printList() const {
    Node<T>* temp = head;
    while (temp) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
