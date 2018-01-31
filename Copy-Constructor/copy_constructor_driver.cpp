/* Example for copy constructor
 *
 * Copy constructor called when:
 *
 * 1. Object of the class is returned by value
 * 2. When object of the class is passed to a function by value as an argument
 * 3. When an object is constructed based on another object of the same class
 * 4. When compiler generates a temporary object  
 *
 * Reference: https://sites.google.com/a/hawaii.edu/ee-205-object-oriented-programming/lectures/copy-and-move
 *
 * */

#include "copy_constructor.hpp"

int main() {
    Pencil p1("yellow", 10);  

    Pencil p2 = p1;

    std::cout << p1.getCost() << " " << p1.getColor() << std::endl;
    std::cout << p2.getCost() << " " << p2.getColor() << std::endl;
}
