/*Реалізувати у вигляді об’єктно-орієнтованої системи структури даних та алгоритми з інших предметів (Список 1). 
Реалізовані структури даних мають підтримувати роботу з даними різних типів. 
Продемонструвати роботу системи на примітивних типах (int, double), бібліотечних типах (string, vector), 
а також реалізованих класах (Список 2). Для всіх структур даних реалізувати методи отримання текстового подання (наприклад, з метою виводу на екран), 
а також генерації відповідних структур даних, заповнених випадковими даними.

Завдання:
Stack, queue, deque (double-ended queue). Реалізації на основі зв’язних списків, масивів, бібліотечних засобів. 
Deque має реалізовувати інтерфейси stack та queue.
*/
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
