#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode* removeNthFromEnd(ListNode* head, int n) {
    if (head == NULL || n <= 0) {
        return head;
    }

    ListNode* first = head;
    ListNode* second = head;

    while(n != 0) {            // find the node before the target
        first = first->next;
        n--;
    }

    if (first == NULL) {        // the nth node is the head
        return head->next;      
    }

    first = first->next;
    while (first != NULL) {
        first = first->next;
        second = second->next;
    }

    second->next = second->next->next;
    return head;
}

int main() {
    ListNode* head = new ListNode(0);
    head->next = new ListNode(1);
    head->next->next = new ListNode(2);
    head->next->next->next = new ListNode(3);

    ListNode* node = head;
    while (node != NULL) {
        cout << node->val;
        node = node->next;
    }
    cout << endl;

    head = removeNthFromEnd(head, 2);
    node = head;
    while (node != NULL) {
        cout << node->val;
        node = node->next;
    }
    cout << endl;
    
    head = removeNthFromEnd(head, 3);
    node = head;
    while (node != NULL) {
        cout << node->val;
        node = node->next;
    }
    cout << endl;

    return 0;
}
