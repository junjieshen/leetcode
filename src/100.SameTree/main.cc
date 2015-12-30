#include <iostream>
#include <vector>
#include <string>
#include "tree_node.h"

using namespace std;

bool isSameTree(TreeNode* p, TreeNode* q) {
    if ((p == NULL && q != NULL) || (p != NULL && q == NULL)) {
        return false;
    } else if (p == NULL && q == NULL) {
        return true;
    } else if (p->val != q->val) {
        return false;
    }
    bool ret = false;
    ret = isSameTree(p->left, q->left);
    ret = ret & isSameTree(p->right, q->right);
    return ret;
}

int main() {
    TreeNode* p = new TreeNode(1);    
    p->left = new TreeNode(2);    
    p->right = new TreeNode(3);    
    TreeNode* q = new TreeNode(1);    
    q->left = new TreeNode(2);    
    q->right = new TreeNode(3);    
    bool res = isSameTree(p, q);
    cout << res << endl;
    return 0;
}
