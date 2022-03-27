//
// Created by Łukasz Matuszczak on 27/03/2022.
//

#ifndef UNTITLED15_PAPERBOOK_H
#define UNTITLED15_PAPERBOOK_H

#include "Book.h"

enum Cover {
    soft, hard
};

class PaperBook: public Book {
    Cover cover;
    int numberOfPages;
public:
    PaperBook(int isbn, const string &title, const string &author, Cover cover, int numberOfPages);
    void show();
};


#endif //UNTITLED15_PAPERBOOK_H
