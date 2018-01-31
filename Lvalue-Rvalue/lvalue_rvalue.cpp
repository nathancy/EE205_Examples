/* An lvalue refers to an object that persists beyond a single
 * expression. You can think of an lvalue as an object with a name.
 * All variables are lvalues. An rvalue is a temporary value that
 * does not persist beyond the expression that uses it. 
 *
 * Think of lvalue as a variable and rvalue as a temp */

#include <iostream>

void print(int &value) {
    std::cout << "lvalue reference: " << value << std::endl;
}

void print(int &&value) {
    std::cout << "rvalue reference: " << value << std::endl;
}

int main() {

    int x = 4 + 3;
    /* In this example, x is a lvalue since it persists beyond
     * the expression that defines it. The expression 3 + 4 is a 
     * rvalue since it is a temporary value that does not persist
     * beyond the expression that created it. */ 

    int j = 99;
    print(j);    // lvalue called
    print(99);   // rvalue called
}
