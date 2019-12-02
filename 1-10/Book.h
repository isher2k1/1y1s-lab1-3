//
// Created by Ivan Sheremet on 02.12.2019.
//

#ifndef BOOK2_BOOK_H
#define BOOK2_BOOK_H
#include <iostream>
#include <string>
using namespace std;

class Books {
protected:
    int value;
public:

    Books(){
        value = 0;
    }
};
class InfoBook : public Books{
public:
    InfoBook() : Books(){

    }
    static const string name[3];

    static const string autor[3];

    static const int kolvo[3];

    static const int day[3];

    static const int month[3];

    static const int year[3];

    static const string anotation[3];

    void series(){
        if(this->anotation[0] == this->anotation[1])
            cout<<"не пашит"<<endl<<this->anotation[0]<<endl;
    };
};
class InfoPers : public Books{
public:
    string anameh1 = "Glavniy Sudar";
    string anameh2 = "Lychshiy Dryg";
    string anameh3 = "Leviy Shtrih";
    string bnameh1 = "Glavniy Sudar";
    string bnameh2 = "Zhena";
    string bnameh3 = "Leviy Shtrih";
    string cnameh1 = "Slabiy Kek";
    string cnameh2 = "Lychshiy Dryg";
    string cnameh3 = "Leviy Shtrih";

    void sort(){
        if(this->anameh1 == this->bnameh1)
            cout<<InfoBook::name[0]<<endl;
    }
};
class Series : public Books{
public:


};

#endif //BOOK2_BOOK_H
