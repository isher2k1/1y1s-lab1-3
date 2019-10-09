#include <iostream>
//#include "Queue.h"
#include "Stack.h"

using namespace std;


int main() {

    Stack myQueue;
    myQueue.Push(5);
    myQueue.Push(12);
    myQueue.Push(9);
    myQueue.Push(40);
    myQueue.Push(21);
    myQueue.Push(35);

    cout << myQueue.Pop() << endl; // 35
    cout << myQueue.Pop() << endl; // 21
    cout << myQueue.Peek() << endl; // 40
    cout << myQueue.Pop() << endl; // 40
    cout << myQueue.Peek() << endl; // 9


    return 0;
}