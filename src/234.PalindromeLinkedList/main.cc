#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <map>
#include <stack>
#include "list_node.h"
#include "tree_node.h"

using namespace std;

bool isPalindrome(ListNode* head) {
    if (head == NULL || head->next == NULL) {
        return true;
    }

    ListNode* fast = head;
    ListNode* slow = head;
    while(fast->next != NULL && fast->next->next != NULL) {
        fast = fast->next->next;
        slow = slow->next;
    }

    ListNode* second = slow->next;
    slow->next = NULL;

    ListNode* p1 = second;
    ListNode* p2 = second->next;
    while(p1 != NULL && p2 != NULL) {
        ListNode* tmp = p2->next;
        p2->next = p1;
        p1 = p2;
        p2 = tmp;
    }
    second->next = NULL;
    second = p1;

    ListNode* p = head;
    ListNode* q = second;
    while(p != NULL && q != NULL) {
        if (p->val != q->val) {
            return false;
        }
        p = p->next;
        q = q->next;
    }

    return true;
}

int main() {
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(2);
    head->next->next->next = new ListNode(1);
    cout << isPalindrome(head) << endl;

    return 0;
}
