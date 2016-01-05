#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <map>
#include <stack>
#include "list_node.h"
#include "tree_node.h"
#include "queue_stack.h"

using namespace std;

int main() {
    QueueStack s;
    s.push(3);
    s.push(2);
    s.push(2);
    s.push(4);
    cout << s.top() << endl;
    s.pop();
    s.pop();
    cout << s.top() << endl;
    s.pop();
    cout << s.top() << endl;

    return 0;
}
