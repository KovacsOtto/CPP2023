//
// Created by Otto on 10/15/2023.
//

#include <stdexcept>
#include "Stack.h"

Stack::Stack() {
}

Stack::~Stack() {
}

void Stack::push(int value) {
    list.insertFirst(value);
}

void Stack::pop() {
    if (!isEmpty()) {
        list.removeFirst();
    }
}
bool Stack::isEmpty() const {
    return list.empty();
}
void Stack::print() const {
    list.print();
}
