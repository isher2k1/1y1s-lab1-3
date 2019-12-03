//
// Created by Ivan Sheremet on 02.12.2019.
//

#include "Book.h"
using namespace std;

void InfoPers::sort(){
    if(InfoPers::nameh1[0]==InfoPers::nameh1[1])
        cout << InfoPers::nameh1[0] << endl;
}

void InfoBook::series(){
    if(this->anotation[0] == this->anotation[1])
        cout<<"не пашит"<<endl<<this->anotation[0]<<endl;
};