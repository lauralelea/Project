#include <stdio.h>
#include "library.h"
#include "user.h"

int main() {
    Person person;
    Library library;
    char choice;
    char name[MAX_NAME_LENGTH], surname[MAX_NAME_LENGTH];

    // Initialize the library with some books
    initialize_library(&library);

    // Prompt for user's name and surname
    printf("Enter your name: ");
    scanf_s("%s", name, sizeof(name));
    printf("Enter your surname: ");
    scanf_s("%s", surname, sizeof(surname));

    // Simulate login
    login(&person, name, surname);

    while (1) {
        printf("\nMenu:\n");
        printf("1. Borrow books\n");
        printf("2. Return books\n");
        printf("3. View your loans\n");
        printf("4. Search for books\n");
        printf("5. Donate books\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf_s(" %c", &choice, sizeof(choice));

        switch (choice) {
        case '1':
            borrow_books(&person, &library);
            break;
        case '2':
            return_books(&person, &library);
            break;
        case '3':
            view_loans(&person);
            break;
        case '4':
            search_books(&library);
            break;
        case '5':
            donate_books(&library);
            break;
        case '6':
            printf("Exiting...\n");
            exit(0);
        default:
            printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}