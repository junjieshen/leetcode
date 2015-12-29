#ifndef _LIST_NODE_H_
#define _LIST_NODE_H_
#include <iostream>

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

void printList(ListNode* head) {
    ListNode* node = head;
    while(node != NULL) {
        std::cout << node->val << ", ";
        node = node->next;
    }
    std::cout << std::endl;
}

#endif  // _LIST_NODE_H_
