//
// Created by Łukasz Matuszczak on 27/03/2022.
//

#include "PaperBook.h"

void PaperBook::show() {
    Book::show();
    string coverType;
    switch (cover) {
        case Cover::soft:
            coverType = "Soft";
            break;
        case Cover::hard:
            coverType = "Hard";
    }
    cout << "Cover: " << coverType << "(" << numberOfPages << " pages)" << endl;
}

PaperBook::PaperBook(int isbn, const string &title, const string &author, Cover cover, int numberOfPages) : Book(isbn,
                                                                                                                 title,
                                                                                                                 author),
                                                                                                            cover(cover),
                                                                                                            numberOfPages(
                                                                                                                    numberOfPages) {}
