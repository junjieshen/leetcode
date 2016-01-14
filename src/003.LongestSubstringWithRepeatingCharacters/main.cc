#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <map>
#include <stack>
#include "list_node.h"
#include "tree_node.h"

using namespace std;

int lengthOfLongestSubstring(string s) {
    vector<int> visited(128, -1);
    int curr_len = 0;
    int max_len = 0;
    for (int i = 0; i < s.size(); i++) {
        int prev_pos = visited[s[i]];
        if ((prev_pos == -1) || (i - curr_len > prev_pos)) {
            curr_len++;
        } else {
            curr_len = i - prev_pos;
        }

        visited[s[i]] = i;
        if (curr_len > max_len) {
            max_len = curr_len;
        }
    }

    return max_len;
}

int main() {
    cout << lengthOfLongestSubstring("aabcdabc") << endl;
    return 0;
}
