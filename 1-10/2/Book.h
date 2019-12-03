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
    static constexpr const char* name[3] = {"Gprniy Orel", "Letauschaya podyshka", "Plachyschee odeyalo"};

    const string autor[3] = {"Gogol", "Kekys", "Melin Monro"};

    const int kolvo[3] = {123, 213, 312};

    const int day[3] = {01, 02, 01};

    const int month[3] = {10, 11, 12};

    const int year[3] = {1994, 1997, 1995};

    const string anotation[3] = {"hernya", "hernya", "gavno"};

    void series();
};
class InfoPers : public Books{
public:
    static constexpr const char* nameh1[3] = {"Glavniy Sudar", "Glavniy Sudar", "Slabiy Kek"};

    const string nameh2[3] = {"Lychshiy Dryg", "Zhena", "Lychshiy Dryg"};

    const string nameh3[3] = {"Leviy Shtrih", "Leviy Shtrih", "Leviy Shtrih"};

    static void sort();
};

#endif //BOOK2_BOOK_H
