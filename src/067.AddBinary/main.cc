#include <iostream>
#include <vector>
#include <string>

using namespace std;

string addBinary(string a, string b) {
    if (a.size() == 0) return b;
    if (b.size() == 0) return a;

    string big;
    string little;
    if (a.size() > b.size()) {
        big = a;
        little = b;
    } else {
        big = b;
        little = a;
    }

    char overflow = 0;
    char out;
    int i;
    int j;
    for (i = big.size() - 1, j = little.size() - 1; i >= 0 || j >= 0; i--, j--) {
        out = big[i] + overflow;

        if (j >= 0) {
            out += little[j] - '0';
        }

        if (out >= '2') {
            big[i] = out - 2;
            overflow = 1;
        } else {
            big[i] = out;
            overflow = 0;
        }
    }

    if (overflow == 1) {
        big.insert(big.begin(), '1');
    }

    return big;
}

int main() {
    string res = addBinary("111", "1");
    cout << res << endl;
    return 0;
}
