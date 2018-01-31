#include "class.hpp"

// Function defintions for class Book

// Default Constructor
Book::Book() {
    cost = 0;
    year = 0;
}

// Overloaded Constructor
Book::Book(int c, int y) {
    cost = c;
    year = y;
}

// Getters
int Book::getCost(void) {
    return cost; 
}

int Book::getYear(void) {
    return year;
}

// Setters
void Book::setCost(int c) {
    cost = c;
}

void Book::setYear(int y) {
    year = y;
}

// Operator overloading for "+"
Book Book::operator+(const Book &b) {
    // Adds "cost" parameter from current object with
    // "cost" parameter from second object
    // Uses overloaded constructor to return Book object
    return Book(cost + b.cost, year + b.year);
}

// Operator overloading for "*"
Book Book::operator*(const Book &b) {
    // Multiplies "cost" parameter from current object with
    // "cost" parameter from second object
    // Uses overloaded constructor to return Book object
    return Book(cost * b.cost, year * b.year);
}

