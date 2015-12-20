#ifndef CTCI_TREE_NODE_H_
#define CTCI_TREE_NODE_H_

#include <cstddef>
#include <iostream>

template <typename T> class TreeNode;
//template <typename T> class Tree;

template <typename T> 
class TreeNode {
    private:
    T data;
    TreeNode<T> *left;
    TreeNode<T> *right;

    public:
    TreeNode(T item) {
        data = item;
        left = NULL;
        right = NULL;
    }
    
    static void inorder(TreeNode<T> *node) {
        if (node != NULL) {
            inorder(node->left);
            std::cout << node->data << "\n";
            inorder(node->right);
        }
    }
    
    static void preorder(TreeNode<T> *node) {
        if (node != NULL) {
            std::cout << node->data << "\n";
            preorder(node->left);
            preorder(node->right);
        }
    }
    
    static void postorder(TreeNode<T> *node) {
        if (node != NULL) {
            postorder(node->left);
            postorder(node->right);
            std::cout << node->data << "\n";
        }
    }
    
    void set_left(TreeNode<T> *node) {
        left = node;
    }
    
    void set_right(TreeNode<T> *node) {
        right = node;
    }
    
    TreeNode<T> *get_left() {
        return left;
    }
    
    TreeNode<T> *get_right() {
        return right;
    }
};

/*
template <typename T> 
class Tree {
    private:
        TreeNode<T> *root;

    public:
        Tree() {top = NULL;};
        ~Tree() {
            while (top != NULL) {
                StackNode<T> *node = top;
                top = top->next;
                delete node;
            }
        };
        T pop() {
            if (!top) {
                throw std::runtime_error("Illegal pop(), the stack is empty");
            }

            StackNode<T> *node = top;
            T data = node->data;
            top = top->next;
            delete node;
            return data;
        };
        void push(T item) {
            StackNode<T> *new_node = new StackNode<T>(item);
            new_node->next = top;
            top = new_node;
        };
        T peek() {
            if (!top) {
                throw std::runtime_error("Illegal pop(), the stack is empty");
            }

            T data = top->data;
            return data;
        };
        bool isEmpty() {
            return (top == NULL);
        };
};
*/
#endif  // CTCI_TREE_H_
