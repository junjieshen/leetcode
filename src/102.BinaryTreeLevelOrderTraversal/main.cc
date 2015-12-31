#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <map>
#include <stack>
#include "list_node.h"
#include "tree_node.h"

using namespace std;

vector<vector<int> > levelOrder(TreeNode* root) {
    vector<vector<int> > ret;
    vector<int> level;
    queue<TreeNode*> q;
    if (root == NULL) {
        return ret;
    }

    q.push(root);
    int curr_level_cnt = 1;
    int next_level_cnt = 0;
    while(!q.empty()) {
        TreeNode* node = q.front();
        q.pop();
        level.push_back(node->val);
        curr_level_cnt--;

        if (node->left != NULL) {
            q.push(node->left);
            next_level_cnt++;
        }
        if (node->right != NULL) {
            q.push(node->right);
            next_level_cnt++;
        }

        if (curr_level_cnt == 0) {
            ret.push_back(level);
            level.clear();
            curr_level_cnt = next_level_cnt;
            next_level_cnt = 0;
        }
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
    vector<vector<int> > res = levelOrder(root);
    for (int i = 0; i < res.size(); i++) {
        for (int j = 0; j < res[i].size(); j++) {
            cout << res[i][j] << ", ";
        }
        cout << endl;
    }
    
    return 0;
}
