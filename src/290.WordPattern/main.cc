#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <map>
#include <stack>
#include "list_node.h"
#include "tree_node.h"

using namespace std;

bool wordPattern(string pattern, string str) {
    map<char, string> m1;
    map<string, char> m2;
    int i = 0;
    int j = 0;
    int iter = 0;
    while(i < str.size() && iter < pattern.size()) {

        while(i < str.size() && str[i] == ' ') {
            i++;
        }
        j = i + 1;
        while(j < str.size() && str[j] != ' ') {
            j++;
        }

        string s = str.substr(i, j-i);
        if (m1.find(pattern[iter]) == m1.end() && m2.find(s) == m2.end()) {
            m1[pattern[iter]] = s;
            m2[s] = pattern[iter];
        } else if (m1[pattern[iter]] != s || m2[s] != pattern[iter]) {
            return false;
        }

        iter++;
        i = j;
    }

    if (i < str.size() || iter < pattern.size()) {
        return false;
    }

    return true;
}

int main() {
    cout << wordPattern("abba", "cat dog dog cat") << endl;
    return 0;
}
