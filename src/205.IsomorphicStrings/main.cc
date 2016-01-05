#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <map>
#include <stack>
#include "list_node.h"
#include "tree_node.h"

using namespace std;

bool isIsomorphic(string s, string t) {
    map<char, char> m1;
    map<char, char> m2;
    for (int i = 0; i < s.size(); i++) {
        if (m1.find(s[i]) == m1.end() && m2.find(t[i]) == m2.end()) {
            m1[s[i]] = t[i];
            m2[t[i]] = s[i];
        } else if (m1.find(s[i]) != m1.end() && m2.find(t[i]) != m2.end()) {
            if (m1[s[i]] != t[i] || m2[t[i]] != s[i]) {
                return false;
            }
        } else {
            return false;
        }
    }
    return true;
}

int main() {
    cout << isIsomorphic("ab", "bb") << endl;
    return 0;
}
