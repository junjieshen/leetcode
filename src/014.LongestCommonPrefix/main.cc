#include <iostream>
#include <vector>
#include <string>
#include <map>

using namespace std;

string longestCommonPrefix(vector<string>& strs) {
    string common_prefix;
    if (strs.empty()) return common_prefix;

    int shortest = strs[0].size();
    for (int i = 1; i < strs.size(); i++) {
        if (strs[i].size() < shortest) {
            shortest = strs[i].size();
        }
    }

    for (int i = 0; i < shortest; i++) {
        char common_char = strs[0][i];
        for (int j = 0; j < strs.size(); j++) {
            if (strs[j][i] != common_char) {
                return common_prefix;
            }
        }
        common_prefix.push_back(common_char);
    }
    return common_prefix;
}

int main() {
    vector<string> strs = {"whatisthis", "whatthefuck"};
    string prefix = longestCommonPrefix(strs);
    cout << prefix << endl;

    return 0;
}
