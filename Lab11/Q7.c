/* Programmer: Syed Saif ur Rehman Shah
*  Description: This is the code for Question 7
*  Related files: https://github.com/iamunknowngamer/Pf-Fall23/blob/main/Lab06/Q6.c
*/
#include <stdio.h>
#include <string.h>

struct Book {
    int accessionNumber;
    char author[50];
    char title[100];
    int isIssued;
};

void displayBook(struct Book book) {
    printf("Accession Number: %d\n", book.accessionNumber);
    printf("Author: %s\n", book.author);
    printf("Title: %s\n", book.title);
    printf("Status: %s\n", (book.isIssued == 1) ? "Issued" : "Available");
    printf("--------------------------\n");
}

void addBook(struct Book library[], int *totalBooks) {
    struct Book newBook;
    
    printf("Enter Accession Number: ");
    scanf("%d", &newBook.accessionNumber);

    printf("Enter Author: ");
    scanf(" %[^\n]s", newBook.author);

    printf("Enter Title: ");
    scanf(" %[^\n]s", newBook.title);

    newBook.isIssued = 0;

    library[*totalBooks] = newBook;
    (*totalBooks)++;
}

void displayBooksByAuthor(struct Book library[], int totalBooks) {
    char authorName[50];
    int found = 0;

    printf("Enter Author's Name: ");
    scanf(" %[^\n]s", authorName);

    printf("\nBooks by %s:\n", authorName);
    for (int i = 0; i < totalBooks; i++) {
        if (strcmp(library[i].author, authorName) == 0) {
            displayBook(library[i]);
            found = 1;
        }
    }

    if (!found) {
        printf("No books found by %s.\n", authorName);
    }
}

void displayNumberOfBooksByTitle(struct Book library[], int totalBooks) {
    char bookTitle[100];
    int count = 0;

    printf("Enter Book Title: ");
    scanf(" %[^\n]s", bookTitle);

    for (int i = 0; i < totalBooks; i++) {
        if (strcmp(library[i].title, bookTitle) == 0) {
            count++;
        }
    }

    printf("Number of books with title '%s' is: %d\n", bookTitle, count);
}

void displayTotalNumberOfBooks(int totalBooks) {
    printf("Total Number of Books in the Library: %d\n", totalBooks);
}

void issueBook(struct Book library[], int totalBooks) {
    int accessionNumber;

    printf("Enter Accession Number of the Book to Issue: ");
    scanf("%d", &accessionNumber);

    for (int i = 0; i < totalBooks; i++) {
        if (library[i].accessionNumber == accessionNumber) {
            if (library[i].isIssued == 0) {
                library[i].isIssued = 1;
                printf("Book with Accession Number %d has been issued.\n", accessionNumber);
            } else {
                printf("Book with Accession Number %d is already issued.\n", accessionNumber);
            }
            return;
        }
    }
    printf("Book with Accession Number %d not found.\n", accessionNumber);
}

int main() {
    struct Book library[100];
    int totalBooks = 0;
    int choice;
    do {
        printf("\nLibrary Menu:\n");
        printf("1. Display Book Information\n");
        printf("2. Add a New Book\n");
        printf("3. Display Books by Author\n");
        printf("4. Display Number of Books by Title\n");
        printf("5. Display Total Number of Books\n");
        printf("6. Issue a Book\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (totalBooks > 0) {
                    printf("\nDisplaying Book Information:\n");
                    for (int i = 0; i < totalBooks; i++) {
                        displayBook(library[i]);
                    }
                } else {
                    printf("No books in the library.\n");
                }
                break;
            case 2:
                addBook(library, &totalBooks);
                printf("Book added successfully.\n");
                break;
            case 3:
                if (totalBooks > 0) {
                    displayBooksByAuthor(library, totalBooks);
                } else {
                    printf("No books in the library.\n");
                }
                break;
            case 4:
                if (totalBooks > 0) {
                    displayNumberOfBooksByTitle(library, totalBooks);
                } else {
                    printf("No books in the library.\n");
                }
                break;
            case 5:
                displayTotalNumberOfBooks(totalBooks);
                break;
            case 6:
                if (totalBooks > 0) {
                    issueBook(library, totalBooks);
                } else {
                    printf("No books in the library.\n");
                }
                break;
            case 0:
                printf("Exiting the program. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }
    } while (choice != 0);
}
