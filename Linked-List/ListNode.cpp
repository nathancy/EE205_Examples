#include "ListNode.hpp"

#include <utility>

ListNode::ListNode(int num) :
    data(num),
    next(nullptr) {}

ListNode::ListNode(const ListNode& other) :
    data(other.data),
    next(other.next) {}

int ListNode::get_data() const {
    return this->data;
}

