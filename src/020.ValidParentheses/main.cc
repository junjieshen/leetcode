#include <iostream>
#include <vector>
#include <string>
#include <stack>

using namespace std;

bool isValid(string s) {
    stack<char> brackets;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
            brackets.push(s[i]);
        } else {
            if (brackets.empty()) return false;
            if ( (s[i] == ')' && brackets.top() != '(') ||
                    (s[i] == '}' && brackets.top() != '{') ||
                    (s[i] == ']' && brackets.top() != '[') ) {
                return false;
            }
            brackets.pop();
        }
    }

    if (!brackets.empty()) {
        return false;
    }

    return true;
}

int main() {
    cout << isValid("(){}[]") << endl;
    cout << isValid("]") << endl;
    cout << isValid("(") << endl;
    cout << isValid("({[]})") << endl;

    return 0;
}
