#include <iostream>
#include <vector>
#include <string>

using namespace std;

string convert(string s, int numRows) {
    if (numRows == 1) return s;

    int group_size = 2 * numRows - 2;
    vector<string> str_vec(numRows);
    for (int i = 0; i < s.size(); i++) {
        int iter_norm = i % group_size;
        if (iter_norm < numRows) {
            str_vec[iter_norm].push_back(s[i]);
        } else {
            str_vec[2 * numRows - 2 - iter_norm].push_back(s[i]);
        }
    }

    string ret;
    for (int i = 0; i < numRows; i ++) {
        ret += str_vec[i];
    }

    return ret;
}

int main() {
    string res = convert("whatisthis", 3);
    cout << res << endl;

    return 0;
}
