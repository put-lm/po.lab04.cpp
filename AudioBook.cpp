//
// Created by Łukasz Matuszczak on 27/03/2022.
//

#include "AudioBook.h"

AudioBook::AudioBook(int isbn, const string &title, const string &author, double audioLength, const string &format)
        : Book(isbn, title, author), audioLength(audioLength), format(format) {}

AudioBook::AudioBook(Book &book, double audioLength, const string &format): Book(book), audioLength(audioLength), format(format)  {}

void AudioBook::show() {
    Book::show();
    cout << "Format: " << format << "(" << audioLength << "min.)" << endl;
}
