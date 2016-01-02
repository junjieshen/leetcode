#include <iostream>
#include <ctime>
#include <string>
#include <algorithm>

using namespace std;

bool isAlpha(char c) {
    if ((c <= 'Z' && c >= 'A') || (c <= 'z' && c >= 'a')) {
        return true;
    }
    return false;
}
bool isNum(char c) {
    if (c >= '0' && c <= '9') {
        return true;
    }
    return false;
}
bool isSame(char c, char d) {
    if (tolower(c) == tolower(d)) {
        return true;
    }
    return false;
}

bool isPalindrome(string s) {
    if (s.size() == 0) return true;
    int i = 0;
    int j = s.size() - 1;
    while (i < j) {
        while(i < s.size() && !isAlpha(s[i]) && !isNum(s[i])) {
            i++;
        }
        while(j >= 0 && !isAlpha(s[j]) && !isNum(s[j])) {
            j--;
        }

        if (i >= j) {
            return true;
        }

        if (!isSame(s[i], s[j])) {
            return false;
        }
        i++;
        j--;
    }

    return true;
}

int main() {
    string s("A man, a plan, a canal: Panama");
    cout << isPalindrome(s) << endl;
    return 0;
}
