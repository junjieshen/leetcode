#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <map>
#include <stack>
#include "list_node.h"
#include "tree_node.h"

using namespace std;

bool isAnagram(string s, string t) {
    if (s.size() != t.size()) return false;

    vector<int> c(128, 0);
    for (int i = 0; i < s.size(); i++) {
        c[s[i]]++;
        c[t[i]]--;
    }

    for (int i = 0; i < 128; i++) {
        if (c[i] != 0) {
            return false;
        }
    }

    return true;
}

int main() {
    cout << isAnagram("rat", "tar") << endl;
    return 0;
}
