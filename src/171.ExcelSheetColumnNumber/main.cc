#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <map>
#include <stack>
#include "list_node.h"
#include "tree_node.h"

using namespace std;

int titleToNumber(string s) {
    int n = 0;
    for (int i = 0; i < s.size(); i++) {
        n = n*26 + s[i] - 'A' + 1;
    }
    return n;
}

int main() {
    cout << titleToNumber("AAC") << endl;
    return 0;
}
