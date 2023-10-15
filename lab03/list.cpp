#include "List.h"
#include <iostream>

List::List() : first(nullptr), nodeCounter(0) {}

List::~List() {
    while (first) {
        Node* temp = first;
        first = first->next;
        delete temp;
    }
}

bool List::exists(int d) const {
    Node* current = first;
    while (current) {
        if (current->value == d) {
            return true;
        }
        current = current->next;
    }
    return false;
}

int List::size() const {
    return nodeCounter;
}

bool List::empty() const {
    return nodeCounter == 0;
}

void List::insertFirst(int d) {
    Node* newNode = new Node(d, first);
    first = newNode;
    nodeCounter++;
}

int List::removeFirst() {
    int removedValue = first->value;
    Node* temp = first;
    first = first->next;
    delete temp;
    nodeCounter--;
    return removedValue;
}

void List::remove(int d, DeleteFlag df) {
    Node* current = first;
    Node* prev = nullptr;

    while (current) {
        if ((df == DeleteFlag::LESS && current->value < d) ||
            (df == DeleteFlag::EQUAL && current->value == d) ||
            (df == DeleteFlag::GREATER && current->value > d)) {
            if (prev) {
                prev->next = current->next;
            } else {
                first = current->next;
            }
            Node* temp = current;
            current = current->next;
            delete temp;
            nodeCounter--;
        } else {
            prev = current;
            current = current->next;
        }
    }
}

void List::print() const {
    Node* current = first;
    while (current) {
        std::cout << current->value << " ";
        current = current->next;
    }
    std::cout << std::endl;
}
