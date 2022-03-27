//
// Created by Łukasz Matuszczak on 27/03/2022.
//

#include "Book.h"

Book::Book(int isbn, const string &title, const string &author) : isbn(isbn), title(title), author(author) {
    cout << "------- Wykonano konstruktor główny" << endl;
}

void Book::show() {
    cout << isbn << " - Title: " << title << "(" << author<< ") - ";
}
