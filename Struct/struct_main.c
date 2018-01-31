/* Struct example in C
 *
 * Compile using "gcc struct.c struct_main.c" 
 *
 * */

#include "struct.h"

int main() {
    struct Book book;
    book.cost = 5;
    book.year = 10;

    printf("directly accessing book cost %d\n", book.cost);
    printf("directly accessing book year %d\n", book.year);

    struct Book *book_ptr;
    book_ptr = &book;

    setCost(book_ptr, 50);
    setYear(book_ptr, 100);

    printf("using method to access book cost %d\n", getCost(book_ptr));
    printf("using method to access book year %d\n", getYear(book_ptr));

    printf("directly accessing book cost %d\n", book.cost);
    printf("directly accessing book year %d\n", book.year);
}

