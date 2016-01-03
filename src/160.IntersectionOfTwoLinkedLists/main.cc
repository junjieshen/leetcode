#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <map>
#include <stack>
#include "list_node.h"
#include "tree_node.h"

using namespace std;

int getLength(ListNode* head) {
    ListNode* n = head;
    int len = 0;
    while(n != NULL) {
        n = n->next;
        len++;
    }
    return len;
}

/* naive solution */
ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
    if (headA == NULL || headB == NULL) return NULL;
    ListNode* na = headA;
    ListNode* nb = headB;
    int lenA = getLength(headA);
    int lenB = getLength(headB);

    if (lenA > lenB) {
        int count = lenA - lenB;
        while(count > 0) {
            na = na->next;
            count--;
        }
    } else {
        int count = lenB - lenA;
        while(count > 0) {
            nb = nb->next;
            count--;
        }
    }

    while(na != NULL && nb != NULL) {
        if (na == nb) {
            return na;
        }
        na = na->next;
        nb = nb->next;
    }
    return NULL;
}

int main() {
    ListNode* ha = new ListNode(0);
    ListNode* hb = new ListNode(1);
    ha->next = new ListNode(2);
    hb->next = ha->next;
    ha->next->next = new ListNode(3);
    ListNode* hc = getIntersectionNode(ha, hb);
    cout << hc->val << endl;
    return 0;
}
