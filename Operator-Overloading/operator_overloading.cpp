#include "operator_overloading.hpp"

/* ************************************* */
// Method #1
// Operator overloading inside class
//
// Since it is inside, you need to add the Scope operator
// In addition, you only need to pass one parameter 
// You can also access the interal variables directly

Phone Phone::operator+(const Phone &b) {
    return Phone(number + b.number, cost + b.cost);
}
/* ************************************* */


/* ************************************* */
// Method #2
// Operator overloading outside class
//
// Since it is outside, you do not need to add the Scope operator
// In addition, you need to pass two parameters, one for the right hand side
// and another for the left hand side
// You CANNNOT access the internal variables directly and NEED to use the
// provided function methods to access the variables

/* 
Phone operator+(const Phone &a, const Phone &b) {
    return Phone(a.getNumber() + b.getNumber(), a.getCost() + b.getCost());
}
*/

/* ************************************* */






// Defining all other member functions in the class

// Default Constructor
Phone::Phone() {
    number = 0;
    cost = 0;
}

// Overloaded Constructor
Phone::Phone(int n, int c) {
    number = n;
    cost = c;
}

// Getters
int Phone::getNumber() const {
    return number;
}

int Phone::getCost() const {
    return cost;
}

