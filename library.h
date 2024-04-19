#ifndef LIBRARY_H
#define LIBRARY_H

#define MAX_NUM_BOOKS 100
#define MAX_NUM_LOANS 10
#define MAX_NAME_LENGTH 50
#define MAX_TITLE_LENGTH 50
#define MAX_AUTHOR_LENGTH 50

// Structure to represent a book
typedef struct {
    char title[MAX_TITLE_LENGTH];
    char author[MAX_AUTHOR_LENGTH];
    int copies_available;
} Book;

// Library structure to hold books and manage operations
typedef struct {
    Book books[MAX_NUM_BOOKS];
    Book donated_books[MAX_NUM_BOOKS];
    int num_books;
    int num_donated_books;
} Library;

// Function prototypes
void initialize_library(Library* library);
void search_books(Library* library);
void donate_books(Library* library);

#endif
#pragma once
