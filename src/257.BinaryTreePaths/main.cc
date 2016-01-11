#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <map>
#include <stack>
#include "list_node.h"
#include "tree_node.h"

using namespace std;

void traverseTree(TreeNode* root, stack<TreeNode*> &s, vector<string> &vs) {
    if (root == NULL) {
        return;
    }

    if (root->left) {
        s.push(root->left);
        traverseTree(root->left, s, vs);
    }

    if (root->right) {
        s.push(root->right);
        traverseTree(root->right, s, vs);
    }

    if (root->left == NULL && root->right == NULL) {
        stack<TreeNode*> tmp;
        string str;
        while(!s.empty()) {
            tmp.push(s.top());
            s.pop();
        }
        while(tmp.size() > 1) {
            TreeNode* n = tmp.top();
            str = str + to_string(n->val);
            str = str + "->";
            s.push(n);
            tmp.pop();
        }

        s.push(tmp.top());
        tmp.pop();
        str = str + to_string(s.top()->val);

        vs.push_back(str);
    }
    s.pop();
}

vector<string> binaryTreePaths(TreeNode* root) {
    if (root == NULL) return vector<string>();
    stack<TreeNode*> s;
    vector<string> vs;

    TreeNode* node = root;
    s.push(node);
    traverseTree(root, s, vs);
    return vs;
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
    vector<string>  res = binaryTreePaths(root);
    for (int i = 0; i < res.size(); i++) {
        cout << res[i] << "\n";
    }

    return 0;
}
