#include <iostream>
#include <vector>
#include <iterator>

/* Compile with "g++ vector.cpp"
 *
 * Vectors are same as dynamic arrays with the ability to resize itself 
 * automatically when an element is inserted or deleted, with their 
 * storage being handled automatically by the container. Vector 
 * elements are placed in contiguous storage so that they can be 
 * accessed and traversed using iterators. In vectors, data is inserted 
 * at the end. 
 *
 * SYNTAX FOR INITIALIZE VECTOR
 * 
 * std::vector<type> variableName;
 *
 * */

int main() {

    // Creating vector of integers
	std::vector<int> numbers;

    // Creating iterator for integers
	std::vector<int>::iterator it;

    // Inserting numbers into vector
	for(int i = 0; i < 5; i++) 
		numbers.push_back(i);

    // Method #1: Iterating through vector and printing value
    for(it = numbers.begin(); it != numbers.end(); it++) 
    {
        std::cout << *it << std:: endl;
    }

    std::cout << std::endl;

    // Method #2: Iterating through vector and printing value
    for(int i = 0; i < numbers.size(); i++) 
    {
        std::cout << numbers[i] << std:: endl;
    }
    
    // Print number of elements in vector
    std::cout << "Size: " << numbers.size();
}

