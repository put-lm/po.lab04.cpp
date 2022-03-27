//
// Created by Łukasz Matuszczak on 27/03/2022.
//

#ifndef UNTITLED15_BOOK_H
#define UNTITLED15_BOOK_H
#include <iostream>
using namespace std;

class Book {
    int isbn;
    string title;
    string author;
protected:
    void show();
public:
    Book(int isbn, const string &title, const string &author);
};


#endif //UNTITLED15_BOOK_H
