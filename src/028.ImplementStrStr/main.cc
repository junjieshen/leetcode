#include <iostream>
#include <vector>
#include <string>

using namespace std;

int strStr(string haystack, string needle) {
    if (needle.size() > haystack.size()) return -1;

    int i;
    int j;
    for (i = 0; i < haystack.size() - needle.size() + 1; i++) {
        for (j = 0; j < needle.size(); j++) {
            if (haystack[i+j] != needle[j]) {
                break;
            }
        }
        if (j == needle.size()) {
            return i;
        }
    }

    return -1;
}

int main() {
    int pos = strStr("whatisthis", "this");
    cout << pos << endl;

    return 0;
}
