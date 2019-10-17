//
// Created by Ivan Sheremet on 10/1/19.
//

#ifndef SQD2_QUEUE_H
#define SQD2_QUEUE_H

class Elem {
public:
    int value;
    Elem* front;

};


class Queue {
    Elem* begin = nullptr;
    Elem* end = nullptr;
public:
    void Enqueue(int number);
    int Peek();
    int Dequeue();
};


#endif //SQD2_QUEUE_H
