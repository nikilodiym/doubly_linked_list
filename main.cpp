#include <iostream>
#include "Queue.h"
#include "Array.h"

int main() {
    Queue<int> queue;
    queue.enqueue(1);
    queue.enqueue(2);
    queue.enqueue(3);
    queue.printQueue();

    queue.dequeue();
    queue.printQueue();

    DoublyLinkedList<int> list1;
    list1.addToTail(10);
    list1.addToTail(20);
    list1.addToTail(30);

    DoublyLinkedList<int> list2;
    list2.addToTail(20);
    list2.addToTail(40);

    DoublyLinkedList<int> mergedList = list1 + list2;
    mergedList.printList();

    DoublyLinkedList<int> commonList = list1 * list2;
    commonList.printList();

    Array<int> arr(5);
    arr.Add(10);
    arr.Add(20);
    arr.Add(30);

    std::cout << "Array size: " << arr.GetSize() << std::endl;

    system("pause");
    return 0;
}