#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <map>
#include <stack>
#include "list_node.h"
#include "tree_node.h"

using namespace std;

string reverseString(string s) {
    int len = s.length();
    for (int i = 0; i < len/2; i++) {
        char t = s[len - i - 1];
        s[len - i - 1] = s[i];
        s[i] = t;
    }

    return s;
}

int main() {
    cout << reverseString("Hello!") << endl;
    return 0;
}
