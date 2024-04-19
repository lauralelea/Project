#include "user.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void login(Person* person, const char* name, const char* surname) {
    strcpy_s(person->name, sizeof(person->name), name);
    strcpy_s(person->surname, sizeof(person->surname), surname);
    person->num_loans = 0;
}

void borrow_books(Person* person, Library* library) {
    // Implementation of borrow_books function
}

void return_books(Person* person, Library* library) {
    // Implementation of return_books function
}

void view_loans(Person* person) {
    // Implementation of view_loans function
}