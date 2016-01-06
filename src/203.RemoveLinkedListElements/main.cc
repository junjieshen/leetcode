#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <map>
#include <stack>
#include "list_node.h"
#include "tree_node.h"

using namespace std;

ListNode* removeElements(ListNode* head, int val) {
    while(head != NULL && head->val == val) {
        ListNode* tmp = head;
        head = head->next;
        delete tmp;
    }

    if (head == NULL) return NULL;

    ListNode* prev = head;
    ListNode* curr = head->next;
    while(curr != NULL) {
        if (curr->val == val) {
            prev->next = curr->next;
            ListNode* tmp = curr;
            curr = curr->next;
            delete tmp;
        } else {
            curr = curr->next;
            prev = prev->next;
        }
    }
    return head;
}

int main() {
    ListNode* head = new ListNode(2);
    head->next = new ListNode(1);
    head->next->next = new ListNode(2);
    head->next->next->next = new ListNode(3);
    head = removeElements(head, 2);
    return 0;
}
