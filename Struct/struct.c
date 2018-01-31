#include "struct.h"

// Getters
int getCost(struct Book *b) {
    return b->cost;
}
int getYear(struct Book *b) {
    return b->year;
}

// Setters
void setCost(struct Book *b, int c) {
    b->cost = c;
}
void setYear(struct Book *b, int y) {
    b->year = y;
}
