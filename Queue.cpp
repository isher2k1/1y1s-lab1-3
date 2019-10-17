//
// Created by Ivan Sheremet on 10/1/19.
//
#include <iostream>
#include "Queue.h"
using namespace std;

void Queue::Enqueue(int number) {
    if (begin == nullptr && end == nullptr){
        Elem* newElement = new Elem;
        newElement->value = number;
        begin = newElement;
        end = newElement;

    }
    else {
        Elem* newElement = new Elem;
        newElement->value = number;
        end->front = newElement;
        end = newElement;
    }
}

int Queue::Peek() {
    return begin->value;
}

int Queue::Dequeue() {
    int number = begin->value;
    Elem *temp = begin;
    begin = begin->front;
    delete temp;
    return number;
}