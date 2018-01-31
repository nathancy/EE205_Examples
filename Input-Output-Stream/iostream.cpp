#include <stdio.h>
#include <iostream>

/* Compile with "g++ iostream.cpp" */

int main() {
    int potato;

    // C way of printing to console and taking in inputs 
    printf("Enter value for potato: ");
    scanf("%d", &potato);
    printf("Potato value is %d\n", potato);

    // C++ way 
    std::cout << "Enter value for potato: ";
    std::cin >> potato;
    std::cout << "Potato value is " << potato << std::endl;
}
