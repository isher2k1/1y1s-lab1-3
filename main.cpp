#include <iostream>
#include "Queue.h"
#include "Stack.h"
#include "Deque.h"

using namespace std;


int main() {

//---------------Stack--------------------
    Stack myStack;
    myStack.Push(5);
    myStack.Push(12);
    myStack.Push(9);
    myStack.Push(40);
    myStack.Push(21);
    myStack.Push(35);

    cout << "#####Stack#########" << endl;
    cout << myStack.Pop() << endl; // 35
    cout << myStack.Pop() << endl; // 21
    cout << myStack.Peek() << endl; // 40
    cout << myStack.Pop() << endl; // 40
    cout << myStack.Peek() << endl; // 9
    cout << "###################" << endl;

//---------------Queue---------------------
    Queue myQueue;
    myQueue.Enqueue(5);
    myQueue.Enqueue(12);
    myQueue.Enqueue(9);
    myQueue.Enqueue(40);
    myQueue.Enqueue(21);
    myQueue.Enqueue(35);

    cout << "#####Queue#########" << endl;
    cout << myQueue.Dequeue() << endl; //5
    cout << myQueue.Peek() << endl; //12
    cout << myQueue.Dequeue() << endl; //12
    cout << myQueue.Dequeue() << endl; //9
    cout << myQueue.Dequeue() << endl; //40
    cout << "###################" << endl;

//---------------Deque---------------------
    Deque myDeque;
    myDeque.EnFront(100);
    myDeque.EnBack(300);
    myDeque.EnBack(200);

    cout<< "#####Deque##########" << endl;
    cout << myDeque.Size() << endl;
    cout << myDeque.ReFront() << endl;
    cout << myDeque.Size() << endl;
//    cout << myDeque.ReBack() << endl;
//    cout << myDeque.Size() << endl;
    cout << myDeque.Front() << endl;
    cout << myDeque.Back() << endl;
//3 100 2 300 200
    cout << "###################" << endl;



    return 0;
}