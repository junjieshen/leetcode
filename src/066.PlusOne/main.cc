#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<int> plusOne(vector<int>& digits) {
    int overflow = false;
    for (int i = digits.size() - 1; i >= 0; i--) {
        if (++digits[i] != 10) {
            overflow = false;
            break;
        }

        digits[i] = 0;
        overflow = true;
    }

    if (overflow) {
        digits.insert(digits.begin(), 1);
    }

    return digits;
}

int main() {
    vector<int> digits;
    digits.push_back(9);
    digits.push_back(9);
    digits.push_back(9);
    digits = plusOne(digits);
    for (int i = 0; i < digits.size(); i++) {
        cout << digits[i];
    }
    cout << endl;
    return 0;
}
