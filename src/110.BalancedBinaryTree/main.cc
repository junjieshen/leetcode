#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <map>
#include <stack>
#include "list_node.h"
#include "tree_node.h"

using namespace std;

int getHeight(TreeNode* root) {
    if (root == NULL) return 0;
    int left = getHeight(root->left);
    if (left == -1) return -1;
    int right = getHeight(root->right);
    if (right == -1) return -1;

    if (abs(left - right) > 1) return -1;
    return max(left, right) + 1;
}

bool isBalanced(TreeNode* root) {
    int res = getHeight(root);
    if (res == -1) return false;
    return true;
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
    cout << isBalanced(root) << endl;

    return 0;
}
