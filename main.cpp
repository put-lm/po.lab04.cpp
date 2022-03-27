#include <iostream>
#include "Book.h"
#include "AudioBook.h"
#include "PaperBook.h"

int main() {
    Book *normalBook = new Book(123, "Harry Potter", "J.K. Rowling");
    //normalBook->show(); // error

    AudioBook *audioBook = new AudioBook(123, "Harry Potter", "J.K. Rowling", 100.23, "mp3");
    audioBook->show();

    AudioBook *audioBookFromAnotherBook = new AudioBook(*normalBook, 218.2, "mp3");
    audioBookFromAnotherBook->show();

    PaperBook *paperBook = new PaperBook(123, "Harry Potter", "J.K. Rowling", Cover::soft, 560);
    paperBook->show();

    return 0;
}
