#pr#ifndef USER_H
#define USER_H

#include "library.h"

// Structure to represent a person
typedef struct {
    char name[MAX_NAME_LENGTH];
    char surname[MAX_NAME_LENGTH];
    Book loans[MAX_NUM_LOANS];
    int num_loans;
} Person;

// Function prototypes
void login(Person* person, const char* name, const char* surname);
void borrow_books(Person* person, Library* library);
void return_books(Person* person, Library* library);
void view_loans(Person* person);

#endifagma once
