#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <map>
#include <stack>
#include "list_node.h"
#include "tree_node.h"
#include "stack_queue.h"

using namespace std;

int main() {
    StackQueue q;
    q.push(3);
    q.push(2);
    q.push(2);
    q.push(4);
    cout << q.peek() << endl;
    q.pop();
    q.pop();
    cout << q.peek() << endl;
    q.pop();
    cout << q.peek() << endl;

    return 0;
}
