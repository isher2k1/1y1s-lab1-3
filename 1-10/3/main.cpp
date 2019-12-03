#include <iostream>
#include "Book.h"
using namespace std;
/*
class Books {
protected:
    int value;
public:
    Books(){
        value = 0;
    }
};
*/
//class InfoBook : public Books{
//public:
    //InfoBook() : Books(){

    //}
    /*
    static constexpr const char* name[3] = {"Gprniy Orel", "Letauschaya podyshka", "Plachyschee odeyalo"};

    const string autor[3] = {"Gogol", "Kekys", "Melin Monro"};

    const int kolvo[3] = {123, 213, 312};

    const int day[3] = {01, 02, 01};

    const int month[3] = {10, 11, 12};

    const int year[3] = {1994, 1997, 1995};

    const string anotation[3] = {"hernya", "hernya", "gavno"};

    //void series();

     */
    //void /*InfoBook::*/series(){
    //    if(this->anotation[0] == this->anotation[1])
    //        cout<<"не пашит"<<endl<<this->anotation[0]<<endl;
    //};
//};

//class InfoPers : public Books{
//public:
    //static constexpr const char* nameh1[3] = {"Glavniy Sudar", "Glavniy Sudar", "Slabiy Kek"};

    //string nameh[3] = {"Glavniy Sudar", "Glavniy Sudar", "Slabiy Kek"};

    //const string nameh2[3] = {"Lychshiy Dryg", "Zhena", "Lychshiy Dryg"};

    //const string nameh3[3] = {"Leviy Shtrih", "Leviy Shtrih", "Leviy Shtrih"};

    //void my_sort();

    //static void /*InfoPers::*/my_sort(){
    //    if(/**InfoPers::*/nameh1[0] == /**InfoPers::*/nameh1[1])
    //        cout << /*InfoPers::*/nameh1[0] << endl;
    //}
    //void mySort(){
    //    if(this->nameh[0] == this->nameh[1])
    //        cout<<"Hren"<<endl<<this->nameh[0];
    //}
//};


int main() {

    InfoBook s;
    s.series();
    InfoPers m;
    m.my_sort();

    return 0;
}