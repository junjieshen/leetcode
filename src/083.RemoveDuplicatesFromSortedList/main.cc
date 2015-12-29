#include <iostream>
#include <vector>
#include <string>
#include "list_node.h"
using namespace std;

ListNode* deleteDuplicates(ListNode* head) {
    if (head == NULL) return head;

    ListNode* prev = head;
    ListNode* curr = head->next;

    while (curr != NULL) {
        if (curr->val == prev->val) {
            ListNode* dup = curr;
            curr = curr->next;
            prev->next = curr;
            delete dup;
        } else {
            curr = curr->next;
            prev = prev->next;
        }
    }

    return head;
}

int main() {
    ListNode* head = new ListNode(1);
    head->next = new ListNode(1);
    head->next->next = new ListNode(2);
    head->next->next->next = new ListNode(2);
    printList(head);
    head = deleteDuplicates(head);
    printList(head);
    return 0;
}
