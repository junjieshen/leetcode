#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <map>
#include <stack>
#include "list_node.h"
#include "tree_node.h"

using namespace std;

int minDepth(TreeNode* root) {
    if (root == NULL) return 0;

    int left = minDepth(root->left);
    int right = minDepth(root->right);

    if (root->left && root->right) {
        return (left < right)?left+1:right+1;
    } else if (root->left == NULL) {
        return right+1;
    } else {
        return left+1;
    }
}

int main() {
    TreeNode* root = new TreeNode(0);
    TreeNode* p = new TreeNode(1);    
    p->left = new TreeNode(2);    
    p->right = new TreeNode(3);    
    TreeNode* q = new TreeNode(1);    
    q->right = new TreeNode(2);
    root->left = p; 
    root->right = q;
    cout << minDepth(root) << endl;

    return 0;
}
