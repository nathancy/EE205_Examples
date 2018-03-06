#include <iostream>
#include <stack>       // standard library for stack
#include <string>

/* Compile with "g++ stack.cpp"
 *
 * Stacks are a type of container adaptors with 
 * LIFO (Last In First Out) type of working, where a new element is 
 * added at one end and (top) an element is removed from that end only.
 *
 * The functions associated with stack are:
 * empty() – Returns whether the stack is empty
 * size() – Returns the size of the stack
 * top() – Returns a reference to the top most element of the stack
 * push(g) – Adds the element ‘g’ at the top of the stack
 * pop() – Deletes the top most element of the stack 
 *
 * SYNTAX FOR INITIALIZING STACK
 *
 * stack <type> variableName;
 *
 * */

// Function to print stack
void print_stack(std::stack <int> s)
{
    std::stack <int> temp = s;
    while(!temp.empty())
    {
        std::cout << temp.top() << std::endl;
        temp.pop();
    }
}

int main() {
    
    // Initialize stack
    std::stack <int> numberStack;

    // Push items onto stack
    numberStack.push(10);
    numberStack.push(20);
    numberStack.push(30);
    numberStack.push(40);
    numberStack.push(50);
   
    // Print stack
    print_stack(numberStack);
    std::cout << std::endl;
    
    // Print size of stack
    std::cout << "Size: " << numberStack.size() << std::endl;
    std::cout << std::endl;

    // Pop first element on stack
    numberStack.pop();

    // Print stack
    print_stack(numberStack);
}
