#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <map>
#include <stack>
#include "list_node.h"
#include "tree_node.h"

using namespace std;

void deleteNode(ListNode* node) {
    if (node == NULL) return;

    while(node->next->next != NULL) {
        node->val = node->next->val;
        node = node->next;
    }
    node->val = node->next->val;
    node->next = NULL;
    delete(node->next);
}

int main() {
    ListNode* head = new ListNode(1);
    head->next = new ListNode(1);
    head->next->next = new ListNode(2);
    head->next->next->next = new ListNode(2);
    printList(head);
    deleteNode(head->next);
    printList(head);

    return 0;
}
