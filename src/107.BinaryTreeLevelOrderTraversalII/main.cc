#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <map>
#include <stack>
#include "list_node.h"
#include "tree_node.h"

using namespace std;

vector<vector<int> > levelOrderBottom(TreeNode* root) {
    if (root == NULL) return vector<vector<int> >();
    int lev = 1;
    int count = 0;
    vector<pair<TreeNode*, int> > q;
    q.push_back(make_pair(root, lev));
    while(count < q.size()) {
        TreeNode* node = q[count].first;
        lev = q[count].second;
        if (node->left) {
            q.push_back(make_pair(node->left, lev+1));
        }
        if (node->right) {
            q.push_back(make_pair(node->right, lev+1));
        }
        count++;
    }
    vector<vector<int> > ret(lev, vector<int>());
    for (int i = 0; i < q.size(); i++) {
        ret[lev - q[i].second].push_back(q[i].first->val);
    }
    return ret;
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
    vector<vector<int> > res = levelOrderBottom(root);
    for (int i = 0; i < res.size(); i++) {
        for (int j = 0; j < res[i].size(); j++) {
            cout << res[i][j] << ", ";
        }
        cout << endl;
    }

    return 0;
}
