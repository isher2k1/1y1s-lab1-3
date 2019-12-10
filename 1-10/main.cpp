/* Лабораторна робота №1
 * Реалізувати у вигляді об’єктно-орієнтованої системи структури даних та алгоритми з інших предметів (Список 1).
 * Реалізовані структури даних мають підтримувати роботу з даними різних типів.
 * Продемонструвати роботу системи на примітивних типах (int, double), бібліотечних типах (string, vector), а також реалізованих класах (Список 2).
 * Для всіх структур даних реалізувати методи отримання текстового подання (наприклад, з метою виводу на екран),
 * а також генерації відповідних структур даних, заповнених випадковими даними.
 *
 * Завдання:
 * Інформація про книги (назва, автор(и), дата виходу, кількість сторінок, коротка анотація)
 * та персонажів книг (список імен/псевдонімів, в яких книгах згадується, для кожної книги рівень участі – головний,
 * чи другорядний, чи епізодичний персонаж). Розбиття книг на серії (дві книги належать до однієї серії,
 * якщо у них є спільний головний чи другорядний персонаж; в рамках серії книги впорядковано за датою виходу).
 *
 * P.S.
 * Я не став додавати кількість сторінок, коротку анотацію та другорядних персонажів.
 * У меня на кожну книгу є по 3 головних персонажа і по 3 епізодичних персонажа.
*/
#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

struct first_Date { int day, month, year; };
struct Date :first_Date {
    std::string name;
    std::vector<std::string>main_hero, untermensch;
};
std::vector<std::string>books = { "Pokemon","Santa","Bulbazavr" };
std::vector<std::vector<std::string>>main_hero = { { "kek1","loh1","jopa1" } ,{ "kek1","loh2","jopa2" },{ "kek2","loh2","jopa3" } };
std::vector<std::vector<std::string>>untermensch = { { "qwe1","asd1","zxc1" } ,{ "wer1","asd1","xcv" },{ "qwe1","asd2","cvb" } };
std::vector<first_Date>date = { {2,12,1994},{14,2,1997},{1,12,1994} };

bool operator==(Date& date1, Date& date2) {
    return (date1.day == date2.day) && (date1.month == date2.month) && (date1.year == date2.year) && (date1.name == date2.name);
}

bool compare(Date d1, Date d2)
{
    if (d1.year < d2.year)
        return true;
    if (d1.year == d2.year && d1.month < d2.month)
        return true;
    if (d1.year == d2.year && d1.month == d2.month && d1.day < d2.day)
        return true;
    return false;
}

bool operator<(const Date& date1, const Date& date2) {
    return compare(date1, date2);
}



void sort(std::vector<std::string>books_name, std::vector<first_Date>date, std::vector<std::vector<std::string>>main_hero, std::vector<std::vector<std::string>>untermensch) {
    std::vector<Date> books(books_name.size()), tmp;
    std::set<std::set<Date>> tmp1;
    for (size_t i = 0; i < books_name.size(); i++)
    {
        books[i].name = books_name[i];
        books[i].day = date[i].day;
        books[i].month = date[i].month;
        books[i].year = date[i].year;
        books[i].main_hero = main_hero[i];
        books[i].untermensch = untermensch[i];
    }

    for (auto a : books) {
        for (auto b : a.main_hero){
            for (auto c : books) {
                for (auto d : c.main_hero) {
                    if (d == b) {
                        tmp.push_back(a);
                        tmp.push_back(c);
                    }
                }
            }
        }
    }

    for (auto a : books) {
        std::set<Date> tmp2;
        for (size_t i = 0; i < tmp.size(); i++)
        {
            if (!(i % 2))  if (a == tmp[i]) { tmp2.insert(tmp[i]); tmp2.insert(tmp[i + 1]); }
        }
        if (!tmp2.empty()) {
            tmp1.insert(tmp2);
            tmp2.clear();
        }
    }

    tmp.clear();
    tmp.shrink_to_fit();

    for (auto a : books) {
        for (auto b : a.untermensch) {
            for (auto c : books) {
                for (auto d : c.untermensch) {
                    if (d == b) {
                        tmp.push_back(a);
                        tmp.push_back(c);
                    }
                }
            }
        }
    }

    for (auto a : books) {
        std::set<Date> tmp2;
        for (size_t i = 0; i < tmp.size(); i++)
        {
            if (!(i % 2))  if (a == tmp[i]) { tmp2.insert(tmp[i]); tmp2.insert(tmp[i + 1]); }
        }
        if (!tmp2.empty()) {
            tmp1.insert(tmp2);
            tmp2.clear();
        }
    }

    int t = 0;
    for (auto a : tmp1) {
        std::cout << ++t << " ";
        for (auto b : a) std::cout << b.name << " ";
        std::cout << " принадлежат одной серии книг." << std::endl;
        std::cout <<std::endl;

    }

    //std::sort(books.begin(), books.end(), compare);
    //for (auto a : books) std::cout << a.name << " ";
}

int main()
{
    sort(books, date, main_hero, untermensch);
    return 0;
}