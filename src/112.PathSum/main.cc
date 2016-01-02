#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <map>
#include <stack>
#include "list_node.h"
#include "tree_node.h"

using namespace std;

bool hasPathSum_iter(TreeNode* root, int sum) {
    if (root == NULL) return false;
    vector<pair<TreeNode*, int> > q;
    q.push_back(make_pair(root, root->val));
    int count = 0;
    while(count < q.size()) {
        TreeNode* nd = q[count].first;
        int val = q[count].second;
        if (nd->left == NULL && nd->right == NULL && val == sum) {
            return true;
        }
        if (nd->left) {
            q.push_back(make_pair(nd->left, val + nd->left->val));
        }
        if (nd->right) {
            q.push_back(make_pair(nd->right, val + nd->right->val));
        }
        count++;
    }

    return false;
}

bool hasPathSum_recu(TreeNode* root, int sum) {
    if (root == NULL) return false;
    if (root->left == NULL && root->right == NULL && root->val == sum) return true;

    return hasPathSum_recu(root->left, sum - root->val) 
        || hasPathSum_recu(root->right, sum - root->val);
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
    cout << hasPathSum_iter(root, 4) << endl;
    cout << hasPathSum_iter(root, 5) << endl;
    cout << hasPathSum_recu(root, 4) << endl;
    cout << hasPathSum_recu(root, 5) << endl;

    return 0;
}
