#include <iostream>
#include <vector>
#include <string>
#include "tree_node.h"

using namespace std;

bool isSymmetricBranch(TreeNode* p, TreeNode* q) {
    if ((p == NULL && q != NULL) || (p != NULL && q == NULL)) {
        return false;
    } else if (p == NULL && q == NULL) {
        return true;
    } else if (p->val != q->val) {
        return false;
    }
    bool ret = false;
    ret = isSymmetricBranch(p->left, q->right);
    ret = ret & isSymmetricBranch(p->right, q->left);
    return ret;
}

/* Recursive method */
bool isSymmetric(TreeNode* root) {
    if (root == NULL) return true;
    return isSymmetricBranch(root->left, root->right);
}

/* Iterative method */
bool isSymmetric_iter(TreeNode* root) {
    if (root == NULL) return true;
    return isSymmetricBranch(root->left, root->right);
}

int main() {
    TreeNode* root = new TreeNode(0);
    TreeNode* p = new TreeNode(1);    
    p->left = new TreeNode(2);    
    p->right = new TreeNode(3);    
    TreeNode* q = new TreeNode(1);    
    q->left = new TreeNode(3);    
    q->right = new TreeNode(2);
    root->left = p; 
    root->right = q;
    bool res = isSymmetric(root);
    cout << res << endl;
    return 0;
}
