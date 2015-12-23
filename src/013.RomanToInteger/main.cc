#include <iostream>
#include <vector>
#include <string>
#include <map>

using namespace std;

int romanToInt(string s) {
    if (s.empty()) return 0;
    map<char, int> roman;
    roman['I'] = 1;
    roman['V'] = 5;
    roman['X'] = 10;
    roman['L'] = 50;
    roman['C'] = 100;
    roman['D'] = 500;
    roman['M'] = 1000;

    int value = 0;
    int prev = 0;
    int curr = 0;
    for (int i = s.size(); i >= 0; i--) {
        curr = roman[s[i]];
        if (curr < prev) {
            value -= curr;
        } else {
            value += curr;
            prev = curr;
        }
    }
    return value;
}

int main() {
    cout << romanToInt("XIX") << endl;

    return 0;
}
