//
// Created by Ivan Sheremet on 10/17/19.
//

#ifndef SQD2_DEQUE_H
#define SQD2_DEQUE_H
#include <iostream>
using namespace std;

class DequeEmptyException{
public:
    DequeEmptyException(){
        cout << "Deque empty" << endl;
    }
};


class El{
public:
    int value;
    El* next = nullptr;
    El* prev = nullptr;
};

class Deque {
    El* front = nullptr;
    El* back = nullptr;
public:
    int count = 0;
    bool isEmpty();
    void EnFront(int number);
    int ReFront();
    void EnBack(int number);
    int ReBack();
    int Front();
    int Back();
    int Size();
};


#endif //SQD2_DEQUE_H
