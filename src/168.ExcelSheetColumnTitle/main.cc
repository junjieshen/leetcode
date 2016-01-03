#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <map>
#include <stack>
#include "list_node.h"
#include "tree_node.h"

using namespace std;

string convertToTitle(int n) {
    vector<char> res;
    while(n > 0) {
        n--;
        res.push_back('A' + n%26);
        n = n/26;
    }
    reverse(res.begin(), res.end());
    return string(res.begin(), res.end());
}

int main() {
    cout << convertToTitle(100) << endl;
    return 0;
}
