#include <stdio.h>

// Defining struct
struct Book {
    // Member variables, internal parameters
    int cost;
    int year;
};

// Prototypes for Operations/methods
// Getters
int getCost(struct Book *b);
int getYear(struct Book *b);

// Setters
void setCost(struct Book *b, int c);
void setYear(struct Book *b, int y);

