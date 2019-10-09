//
// Created by Ivan Sheremet on 10/8/19.
//

#ifndef SQD2_STACK_H
#define SQD2_STACK_H

class Element {
public:
    int value;
    Element* front;

};


class Stack {
    Element* begin = nullptr;
    Element* end = nullptr;
public:
    void Push(int number);
    int Peek();
    int Pop();
};


#endif //SQD2_STACK_H
