//
// Created by Otto on 10/15/2023.
//

#ifndef MAIN_03_CPP_STACK_H
#define MAIN_03_CPP_STACK_H

#include "list.h"

class Stack {
public:
    Stack();
    ~Stack();
    void push(int value);
    void pop();
    bool isEmpty() const;
    void print() const;

private:
    List list;
};


#endif //MAIN_03_CPP_STACK_H
