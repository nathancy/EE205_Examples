#include <iostream>
#include <queue>       // standard library for queue
#include <string>

/* Compile with "g++ queue.cpp"
 *
 * Queues are a type of container adaptors which operate in a first 
 * in first out (FIFO) type of arrangement. Elements are inserted at 
 * the back (end) and are deleted from the front.
 *
 * The functions supported by queue are :
 * empty() – Returns whether the queue is empty
 * size() – Returns the size of the queue
 * front() – Returns a reference to the first element of the queue
 * back() – Returns a reference to the last element of the queue
 * push(g) – Adds the element ‘g’ at the end of the queue
 * pop() – Deletes the first element of the queue
 *
 * SYNTAX FOR INITIALIZING QUEUE 
 *
 * queue <type> variableName;
 *
 * */

// Function to print queue
void print_queue(std::queue <int> q)
{
    std::queue <int> temp = q;
    while(!temp.empty())
    {
        std::cout << temp.front() << std::endl;
        temp.pop();
    }
}

int main() {
   
    // Initializing queue
    std::queue <int> numberQueue;

    // Inserting into queue
    numberQueue.push(50);
    numberQueue.push(100);
    numberQueue.push(300);

    // Print elements in queue
    print_queue(numberQueue);
    std::cout << std::endl;
    
    // Print size of queue
    std::cout << "Size: " << numberQueue.size() << std::endl;
    std::cout << std::endl;

    // Pop first element
    numberQueue.pop();

    // Print elements in queue
    print_queue(numberQueue);
}
