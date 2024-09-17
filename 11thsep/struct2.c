#include <stdio.h>

struct Book {
    char title[100];
    char author[100];
    float price;
};

int main() {
    struct Book books[5];
    int i;

    // Taking input for each book
    for (i = 0; i < 5; i++) {
        printf("Enter details for book %d:\n", i + 1);
        printf("Title: ");
        scanf(" %[^\n]%*c", books[i].title); // To read string with spaces
        printf("Author: ");
        scanf(" %[^\n]%*c", books[i].author);
        printf("Price: ");
        scanf("%f", &books[i].price);
    }

    // Printing details of each book
    printf("\nDetails of all books:\n");
    for (i = 0; i < 5; i++) {
        printf("Book %d:\n", i + 1);
        printf("Title: %s\n", books[i].title);
        printf("Author: %s\n", books[i].author);
        printf("Price: %.2f\n", books[i].price);
    }

    return 0;
}

