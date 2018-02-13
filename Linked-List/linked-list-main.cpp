/* Example for linked-list
 *
 * Compile with "g++ linked-list-main.cpp ListNode.cpp */

#include <string>
#include <iostream>
#include "ListNode.hpp"

int main() {
    // Create a new node by dynamically allocating memory
    ListNode *head = new ListNode(150);

	// Setting a ListNode pointer to the head of the list
	ListNode *current = head;

	// Length of the linked list
	int length = 0;

	// Creating a linked list
	for(int i = 0; i < 3; i++) {
		// Set current to a new node	
		current->next = new ListNode(i);

		// Traverse list to next node
		current = current->next;
		length++;
	}

	// Print out the linked list 	
    // Create a new pointer so you can iterate through list
	for(ListNode *node = head; node != nullptr; node = node->next) {
		std::cout << node->get_data() << " -> ";
	} 
	std::cout << "nullptr" << std::endl;
}
