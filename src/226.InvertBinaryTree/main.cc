#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <map>
#include <stack>
#include "list_node.h"
#include "tree_node.h"

using namespace std;

TreeNode* invertTree(TreeNode* root) {
    if (root == NULL) return NULL;

    if (root->left) {
        root->left = invertTree(root->left);
    }
    if (root->right) {
        root->right = invertTree(root->right);
    }

    TreeNode* tmp = root->left;
    root->left = root->right;
    root->right = tmp;

    return root;
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
    root = invertTree(root);

    return 0;
}
