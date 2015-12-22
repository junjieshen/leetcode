#include <iostream>
#include <vector>
#include <string>

using namespace std;

int reverse(int x) {
    int scale = 1;
    if (x < 0) {
        x *= -1;
        scale = -1;
    }

    int max_int = (int)(((unsigned int)1 << 31) - (unsigned int)1);
    int value = 0;

    while(x != 0) {
        if (value != 0 && max_int/value < 10) {
            return 0;
        }
        value = value*10 + x%10;
        x = x/10;
    }

    return value * scale;
}

int main() {
    int value = 123;
    int result = reverse(value);
    cout << "Before: " << value << " After: " << result << endl;
    value = 1534236469;
    result = reverse(value);
    cout << "Before: " << value << " After: " << result << endl;
    value = -2147483648;
    result = reverse(value);
    cout << "Before: " << value << " After: " << result << endl;
    return 0;
}
