#include "List.h"
#include "Stack.h"
#include <iostream>

int main() {
//    List myList;
//
//    myList.insertFirst(42);
//    myList.insertFirst(10);
//    myList.insertFirst(30);
//    myList.insertFirst(5);
//    myList.insertFirst(20);
//    myList.print();
//
//    std::cout << "Size of the list: " << myList.size() << std::endl;
//
//    std::cout << "Is 10 in the list? " << (myList.exists(10) ? "Yes" : "No") << std::endl;
//    std::cout << "Is 99 in the list? " << (myList.exists(99) ? "Yes" : "No") << std::endl;
//
//    myList.remove(15, List::DeleteFlag::LESS);
//    myList.print();
//
//    myList.remove(25, List::DeleteFlag::GREATER);
//    myList.print();
//
//    myList.remove(30, List::DeleteFlag::EQUAL);
//    myList.print();
//
//    myList.removeFirst();
//    myList.print();
    Stack myStack;

    myStack.push(10);
    myStack.push(20);
    myStack.push(30);
    myStack.push(40);
    myStack.print();
    myStack.pop();
    myStack.print();
    return 0;
}
