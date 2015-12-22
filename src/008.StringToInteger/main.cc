#include <iostream>
#include <vector>
#include <string>

using namespace std;

int myAtoi(string str) {
    if (str.size() == 0) return 0;
    int scale = 1;
    double value = 0.0;
    int i = 0;
    while (str[i] == ' ') {
        i++;
    }

    if (str[i] == '-') {
        scale = -1;
        i++;
    } else if (str[i] == '+') {
        scale = 1;
        i++;
    }

    string sub = str.substr(i, str.size() - i);
    for (int j = 0; j < sub.size(); j++) {
        if (sub[j] < '0' || sub[j] > '9') {
            break;
        }
        value = value * 10 + (sub[j] - '0');
    }

    value = value * scale;
    if (value > INT_MAX) {
        return INT_MAX;
    }
    if (value < INT_MIN) {
        return INT_MIN;
    }

    return (int)value;
}

int main() {
    int result = myAtoi("  12345 123");
    cout << result << endl;

    return 0;
}
