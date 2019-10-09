//
// Created by Ivan Sheremet on 10/1/19.
//
#include <iostream>
#include "Queue.h"
using namespace std;

void Queue::Enqueue(int number) {
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

int Queue::Peek() {
    return begin->value;
}

int Queue::Dequeue() {
    int number = begin->value;
    Element *temp = begin;
    begin = begin->front;
    delete temp;
    return number;
}