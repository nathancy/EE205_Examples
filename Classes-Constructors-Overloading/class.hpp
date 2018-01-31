#include <iostream>

// Class defintion for Book
class Book {

    // Usually member functions/operations
    public:
        // Default constructor
        Book();

        // Overloaded constructor
        Book(int c, int y);

        // Getters
        int getCost(void);
        int getYear(void);

        // Setters
        void setCost(int c);
        void setYear(int y);

        // Operator overloading
        Book operator+(const Book &b);
        Book operator*(const Book &b);

    // Usually Member variables
    private:
        int cost;
        int year;
};
