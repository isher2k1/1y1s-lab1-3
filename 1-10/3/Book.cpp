//
// Created by Ivan Sheremet on 02.12.2019.
//
#include <iostream>
#include "Book.h"
using namespace std;
/*

void InfoPers::my_sort(){
    if(*InfoPers::nameh1[0] == *InfoPers::nameh1[1])
        cout << InfoPers::nameh1[0] << endl;
}

void InfoBook::series(){
    if(this->anotation[0] == this->anotation[1])
        cout<<"не пашит"<<endl<<this->anotation[0]<<endl;
};
 */

void InfoPers::my_sort() {
    if(this->nameh[0] == this->nameh[1])
        cout<<"Hren"<<endl<<this->nameh[0];
}

void InfoBook::series() {
    if(this->anotation[0] == this->anotation[1])
        cout<<"не пашит"<<endl<<this->anotation[0]<<endl;
}