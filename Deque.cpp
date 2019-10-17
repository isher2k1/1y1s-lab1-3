//
// Created by Ivan Sheremet on 10/17/19.
//

#include "Deque.h"

bool Deque::isEmpty() {
     return count == 0 ? true : false;

}

void Deque::EnFront(int number) {
    El* newElement = new El;
    newElement->value = number;
    if ( isEmpty() ) {
     front = back = newElement;
     }
    else {
     newElement->next = front;
     front->prev = newElement;
     front = newElement;
     }
    count++;
}

int Deque::ReFront() {
    if ( isEmpty() ) {
        throw new DequeEmptyException();
    }
    int kek = front->value;
    El* newElement = front;
    if ( front->next != NULL ){
        front = front->next;
        front->prev = NULL;
     }
    else{
        front = nullptr;
    }
    count--;
    delete newElement;
    return kek;
}

void Deque::EnBack(int number) {
    El* newElement = new El;
    newElement->value = number;
    newElement->next = NULL;
    newElement->prev = NULL;
    if ( isEmpty() ) {
        front = back = newElement;
    }
    else {
        back->next = newElement;
        newElement->prev = back;
        back = newElement;
    }
    count++;
}

int Deque::ReBack() {
    if ( isEmpty() ) {
        throw new DequeEmptyException();
    }
    int kek = back->value;
    El* newElement = back;
    if ( back->prev != NULL ) {
        back = back->prev;
        back->next = NULL;
    }
    else{
        back = NULL;
    }
    count--;
    delete newElement;
    return kek;
}

int Deque::Front(){
    if ( isEmpty() )
    throw new DequeEmptyException();
    return front->value;
}

int Deque::Back(){
    if ( isEmpty() )
    throw new DequeEmptyException();
    return back->value;
}

int Deque::Size(){
 return count;
}