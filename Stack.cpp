//
// Created by Ivan Sheremet on 10/8/19.
//

#include "Stack.h"

void Stack::Push(int number) {
    if (begin == nullptr && end == nullptr){
        Element* newElement = new Element;
        newElement->value = number;
        end = newElement;
        begin = newElement;

    }
    else {
        Element* newElement = new Element;
        newElement->value = number;
        newElement->front = begin;
        begin = newElement;
    }
}

int Stack::Peek() {
    return begin->value;
}

int Stack::Pop() {
    int number = begin->value;
    Element *temp = begin;
    begin = begin->front;
    delete temp;
    return number;
}