#include <iostream>
#include <vector>
#include <string>

using namespace std;

int lengthOfLastWord(string s) {
    if (s.size() == 0) return 0;

    int len = 0;
    bool present = false;
    for (int i = s.size() - 1; i >= 0; i--) {
        if (s[i] != ' ') {
            present = true;
            len++;
        } else if (present == true) {
            break;
        }
    }

    return len;
}

int main() {
    int len = lengthOfLastWord("Hello World");
    cout << len << endl;
    return 0;
}
