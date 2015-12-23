#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
    if (l1 == NULL) return l2;
    if (l2 == NULL) return l1;

    ListNode* head;
    if (l1->val < l2->val) {
        head = l1;
        l1 = l1->next;
    } else {
        head = l2;
        l2 = l2->next;
    } 

    ListNode* node = head;
    while (l1 != NULL && l2 != NULL) {
        if (l1->val < l2->val) {
            node->next = l1;
            l1 = l1->next;
        } else {
            node->next = l2;
            l2 = l2->next;
        }
        node = node->next;
    }

    if (l1 != NULL) {
        node->next = l1;
    } else if (l2 != NULL) {
        node->next = l2;
    }

    return head;
}

int main() {
    ListNode* one = new ListNode(0);
    one->next = new ListNode(2);
    one->next->next = new ListNode(4);
    one->next->next->next = new ListNode(6);
    
    ListNode* two = new ListNode(1);
    two->next = new ListNode(3);
    two->next->next = new ListNode(5);
    two->next->next->next = new ListNode(7);

    ListNode* head = mergeTwoLists(one, two);
    ListNode* node = head;
    while (node != NULL) {
        cout << node->val;
        node = node->next;
    }
    cout << endl;

    return 0;
}
