#include <stdio.h>

typedef struct BOOK{
    char *name;
    char *author;
    int price;
} book;
void display_book(book infos);
int main() {
    book inf;
    inf.name = "The Kite runner";
    inf.author = "Khaled Husseini";
    inf.price = 320;
    display_book(inf);
    return 0;
}

void display_book(book infos){
    printf("The book name is: %s\n", infos.name);
    printf("Writer: %s\n", infos.author);
    printf("Price: %d", infos.price);
}

