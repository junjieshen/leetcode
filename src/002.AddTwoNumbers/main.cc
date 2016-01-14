#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <map>
#include <stack>
#include "list_node.h"
#include "tree_node.h"

using namespace std;

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    ListNode* res = new ListNode(0);
    int overflow = 0;
    ListNode* curr = res;
    while (l1 != NULL || l2 != NULL) {
        int out = 0;
        if (l1 != NULL && l2 != NULL) {
            out = l1->val + l2->val + overflow;
            l1 = l1->next;
            l2 = l2->next;
        } else if (l1 != NULL) {
            out = l1->val + overflow;
            l1 = l1->next;
        } else {
            out = l2->val + overflow;
            l2 = l2->next;
        }

        if (out >= 10) {
            out -= 10;
            overflow = 1;
        } else {
            overflow = 0;
        }

        curr->next = new ListNode(out);
        curr = curr->next;
    }

    if (overflow == 1) {
        curr->next = new ListNode(1);
    }

    return res->next;
}

int main() {
    
    return 0;
}
