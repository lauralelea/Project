#include "library.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Initialize library with some books and no donated books initially
void initialize_library(Library* library) {
    strcpy_s(library->books[0].title, sizeof(library->books[0].title), "Book1");
    strcpy_s(library->books[0].author, sizeof(library->books[0].author), "Author1");
    library->books[0].copies_available = 5;

    strcpy_s(library->books[1].title, sizeof(library->books[1].title), "Book2");
    strcpy_s(library->books[1].author, sizeof(library->books[1].author), "Author2");
    library->books[1].copies_available = 3;

    strcpy_s(library->books[2].title, sizeof(library->books[2].title), "Book3");
    strcpy_s(library->books[2].author, sizeof(library->books[2].author), "Author3");
    library->books[2].copies_available = 2;

    library->num_books = 3;
    library->num_donated_books = 0;
}

void search_books(Library* library) {
    // Implementation of search_books function
}

void donate_books(Library* library) {
    // Implementation of donate_books function
}