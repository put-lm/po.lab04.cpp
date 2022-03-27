//
// Created by Łukasz Matuszczak on 27/03/2022.
//

#ifndef UNTITLED15_AUDIOBOOK_H
#define UNTITLED15_AUDIOBOOK_H


#include "Book.h"

class AudioBook: public Book {
    double audioLength;
    string format;
public:
    AudioBook(int isbn, const string &title, const string &author, double audioLength, const string &format);
    AudioBook(Book &book, double audioLength, const string &format);
    void show();
};


#endif //UNTITLED15_AUDIOBOOK_H
