#include <vector>
#include <iostream>
#include <cassert>
#include "tree_node.h"

typedef std::vector<int>    int_vec_t;
typedef std::vector<char>   char_vec_t;
typedef std::vector<bool>   bool_vec_t;

int main(void)
{
    TreeNode<int> *root = new TreeNode<int>(0);
    TreeNode<int> *left = new TreeNode<int>(1);
    TreeNode<int> *right = new TreeNode<int>(2);
    root->set_left(left);
    root->set_right(right);
    TreeNode<int> *leftleft = new TreeNode<int>(3);
    TreeNode<int> *leftright = new TreeNode<int>(4);
    left->set_left(leftleft);
    left->set_right(leftright);
    TreeNode<int> *rightleft = new TreeNode<int>(5);
    TreeNode<int> *rightright = new TreeNode<int>(6);
    right->set_left(rightleft);
    right->set_right(rightright);

    std::cout << "Inorder: \n";
    root->inorder(root);
    std::cout << "Preorder: \n";
    root->preorder(root);
    std::cout << "Postorder: \n";
    root->postorder(root);
    return 0;
}
