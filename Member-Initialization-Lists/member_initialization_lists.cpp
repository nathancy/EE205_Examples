// Reference: https://www.geeksforgeeks.org/when-do-we-use-initializer-list-in-c/

#include "member_initialization_lists.hpp"

// Default Constructor using normal way
Rectangle::Rectangle() {
    width = 0;
    length = 0;
    rectangle_name = "";
}

// Overloaded Constructor using normal way
Rectangle::Rectangle(int w, int l, std::string name) {
    width = w;
    length = l;
    rectangle_name = name;
}

// Default Constructor using member initialization lists
Rectangle::Rectangle() : width(0),
                         length(0),
                         rectangle_name("") {}

// Overloaded Constructor using member initialization lists
Rectangle::Rectangle(int w, int l, std::string name) : width(w),
                                                       length(l),
                                                       rectangle_name(name) {}
