//
// Created by Ivan Sheremet on 10/1/19.
//

#ifndef SQD2_QUEUE_H
#define SQD2_QUEUE_H

class Element {
public:
    int value;
    Element* front;

};


class Queue {
    Element* begin = nullptr;
    Element* end = nullptr;
public:
    void Enqueue(int number);
    int Peek();
    int Dequeue();
};


#endif //SQD2_QUEUE_H
