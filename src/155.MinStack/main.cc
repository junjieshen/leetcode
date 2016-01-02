#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <map>
#include <stack>
#include "list_node.h"
#include "tree_node.h"
#include "min_stack.h"

using namespace std;

int main() {
    MinStack s;
    s.push(3);
    s.push(2);
    s.push(2);
    s.push(4);
    cout << s.getMin() << endl;
    s.pop();
    s.pop();
    cout << s.getMin() << endl;
    s.pop();
    cout << s.getMin() << endl;

    return 0;
}
