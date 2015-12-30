#ifndef _TREE_NODE_H_
#define _TREE_NODE_H_
#include <iostream>

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
/*
void printList(ListNode* head) {
    ListNode* node = head;
    while(node != NULL) {
        std::cout << node->val << ", ";
        node = node->next;
    }
    std::cout << std::endl;
}
*/
#endif  // _TREE_NODE_H_
