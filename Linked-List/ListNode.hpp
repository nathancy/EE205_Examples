#ifndef NODE_HPP
#define NODE_HPP

class ListNode {
    public:
        /* These two parameters should be in private scope
         * For the sake of this example, its in public scope */

        /* NOTE: In the actual lab, these two parameters are private but can be 
         * directly accessed since it given the "friend" specifier */
        int data;
        ListNode* next;
        /* ************************************************* */

        // Regular constructor with data
        ListNode(int data);
        // Copy constructor
        ListNode(const ListNode& other);
        
        // Getters
        int get_data() const;
};

#endif 

