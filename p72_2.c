#include <stdio.h>
#include <string.h>

struct Books {
    char author[20];
    char title[20];
    int book_id;
};

void PrintBook(struct Books *book);

int main(void) {
    struct Books Book1, Book2;

// Book1 specs
    strcpy(Book1.author, "Simon Long");
    strcpy(Book1.title, "C Programming");
    Book1.book_id = 001;
//Book2 specs
    strcpy(Book2.author, "Alex Charalabidis");
    strcpy(Book2.title, "The book of IRC");
    Book2.book_id = 002;

    PrintBook(&Book1);
    PrintBook(&Book2);
    
    return 0;
}

void PrintBook(struct Books *book) {
    printf("%s\n", book->author);
    printf("%s\n", book->title);
    printf("%d\n\n", book->book_id);
}

