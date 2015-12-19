#include <cstddef>
template <typename T> class StackNode;
template <typename T> class Stack;

template <typename T> 
class StackNode {
    public:
    StackNode(T item) { data = item; next = NULL;};
    T data;
    StackNode<T> *next;
};

template <typename T> 
class Stack {
    private:
        StackNode<T> *top;

    public:
        Stack() {top = NULL;};
        ~Stack() {
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
