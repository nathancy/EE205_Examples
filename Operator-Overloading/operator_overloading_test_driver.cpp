/* Test driver for operator overloading
 * 
 * To compile: "g++ operator_overloading_test_driver.cpp operator_overloading.cpp"
 *
 * */

#include "operator_overloading.hpp"
#include <iostream>

int main() {
    // Initializing objects using overloaded constructor
    Phone phone1(20, 30);
    Phone phone2(50, 70);
    
    // Initializing object using default constructor
    Phone phone3;

    // Adding objects together using overloaded addition operator
    phone3 = phone1 + phone2;

    std::cout << phone3.getNumber() << std::endl;
}
