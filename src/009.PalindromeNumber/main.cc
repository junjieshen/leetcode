#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool isPalindrome(int x) {
    if (x < 0) return false;
    int div = 1;
    while (x/div >= 10) div*=10;

    while (x != 0) {
        int left = x/div;
        int right = x%10;
        if (left != right) return false;

        x = (x % div) / 10;
        div /= 100;
    }
    return true;
}

int main() {
    cout << isPalindrome(1321) << endl;
    cout << isPalindrome(121) << endl;
    cout << isPalindrome(1000000001) << endl;

    return 0;
}
