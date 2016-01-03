#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <map>
#include <stack>
#include "list_node.h"
#include "tree_node.h"

using namespace std;

int compareVersion(string version1, string version2) {
    int curr1 = 0; 
    int curr2 = 0;
    int prev1 = 0;
    int prev2 = 0;

    while(curr1 < version1.size() || curr2 < version2.size()) {
        while(curr1 < version1.size() && version1[curr1] != '.') {
            curr1++;
        }
        while(curr2 < version2.size() && version2[curr2] != '.') {
            curr2++;
        }

        int val1 = 0;
        if (curr1 <= version1.size()) {
            val1 = atoi(version1.substr(prev1, curr1 - prev1).c_str());
        }
        int val2 = 0;
        if (curr2 <= version2.size()) {
            val2 = atoi(version2.substr(prev2, curr2 - prev2).c_str());
        }

        if (val1 > val2) {
            return 1;
        } else if (val1 < val2) {
            return -1;
        }

        curr1 = curr1 + 1;
        curr2 = curr2 + 1;
        prev1 = curr1;
        prev2 = curr2;
    }
    return 0;
}

int main() {
    int ret = compareVersion("1.1.1", "1.1");
    cout << ret << endl;
    return 0;
}
