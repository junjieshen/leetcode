#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <map>
#include <stack>
#include "list_node.h"
#include "tree_node.h"

using namespace std;

int maxDepth(TreeNode* root) {
    if (root == NULL) return 0;
    int left_depth = maxDepth(root->left);
    int right_depth = maxDepth(root->right);
    return (left_depth > right_depth)?left_depth + 1:right_depth + 1;
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
    cout << maxDepth(root) << endl;

    return 0;
}
