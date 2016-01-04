#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <map>
#include <stack>
#include "list_node.h"
#include "tree_node.h"

using namespace std;

ListNode* reverseList(ListNode* head) {
    if (head == NULL) return NULL;
    ListNode* prev = head;
    ListNode* curr = head->next;
    prev->next = NULL;
    while(curr != NULL) {
        ListNode* n = curr;
        curr = curr->next;
        n->next = prev;
        prev = n;
    }

    return prev;
}

int main() {
    ListNode* head = new ListNode(1);
    head->next = new ListNode(1);
    head->next->next = new ListNode(2);
    head->next->next->next = new ListNode(2);
    printList(head);
    head = reverseList(head);
    printList(head);

    return 0;
}
