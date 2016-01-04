#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <map>
#include <stack>
#include "list_node.h"
#include "tree_node.h"

using namespace std;

TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
    if (root == NULL || p == NULL || q == NULL) return NULL;

    if (p->val < root->val && q->val < root->val) {
        return lowestCommonAncestor(root->left, p, q);
    } else if (p->val > root->val && q->val > root->val) {
        return lowestCommonAncestor(root->right, p, q);
    } else {
        return root;
    }
}

int main() {
    TreeNode* root = new TreeNode(6);
    TreeNode* p = new TreeNode(2);    
    p->left = new TreeNode(0);    
    p->right = new TreeNode(4);    
    TreeNode* q = new TreeNode(8);    
    q->left = new TreeNode(7);    
    q->right = new TreeNode(9);
    root->left = p; 
    root->right = q;
    
    TreeNode* n = lowestCommonAncestor(root, p->left, p->right);
    cout << n->val << endl;
    return 0;
}
