/* Compile with "g++ class_main.cpp class.cpp" */

#include "class.hpp"

int main() {
    // Creating "Book" objects
    Book book1;
    Book book2;
    Book book3;

    // Setting the internal cost parameters
    book1.setCost(5);
    book2.setCost(10);

    // Outputting the cost parameters to the console
    std::cout << "Book1 cost is : " << book1.getCost() << std::endl;
    std::cout << "Book2 cost is : " << book2.getCost() << std::endl;
  
    // Using operator overloading to multiply the internal parameters of the two objects
    book3 = book1 * book2;

    std::cout << "Book3 cost is : " << book3.getCost() << std::endl;
}
