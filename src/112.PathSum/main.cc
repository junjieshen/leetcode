#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <map>
#include <stack>
#include "list_node.h"
#include "tree_node.h"

using namespace std;

bool hasPathSum(TreeNode* root, int sum) {
    if (root == NULL) return false;
    if (root->left == NULL && root->right == NULL && root->val == sum) return true;

    return hasPathSum(root->left, sum - root->val) 
        || hasPathSum(root->right, sum - root->val);
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
    cout << hasPathSum(root, 4) << endl;
    cout << hasPathSum(root, 5) << endl;

    return 0;
}
