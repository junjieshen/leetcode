#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <map>
#include <stack>
#include "list_node.h"
#include "tree_node.h"

using namespace std;

int addDigits(int num) {
    return num - 9 * ((num - 1)/9);
}

int main() {
    cout << addDigits(21) << endl;
    return 0;
}
