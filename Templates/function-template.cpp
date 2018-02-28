#include <iostream>

// Compile with "g++ function-template.cpp"
// Function templates are special functions that can operate with generic types.
// When the compiler encounters this call to a template function, it uses
// the template to automatically generate a function replacing each appearance
// of newType by the type passed as the actual template parameter and then calls it. 
//
// Format for declaring function templates with type parameter:
// template <typename newType> function_name();
//
// Format to use function template:
// function_name <type> (parameters);

template <typename newType>
newType getMax(newType a, newType b) {
    if (a > b) {
        return a;
    }
    else return b;
}

int main() {
    int i = 5;
    int j = 6;
    int k;

    double l = 10;
    double m = 5;
    double n;

    k = getMax<int>(i,j);
    n = getMax<double>(l,m);
    
    std::cout << k << std::endl;
    std::cout << n << std::endl;
}
