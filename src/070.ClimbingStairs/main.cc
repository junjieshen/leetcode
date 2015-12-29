#include <iostream>
#include <vector>
#include <string>

using namespace std;

/*
 * Note: Change the return type to long long
 * to prevent overflow when n is bigger than 48
 */
long long climbStairs(int n) {
    if (n <= 3) return n;

    long long a = 1;
    long long b = 2;
    long long c = 3;

    for (int i = 4; i <= n; i++) {
        a = c;
        c = a + b;
        b = a;
    }

    return c;
}

int main() {
    for (int i = 1; i <= 50; i++) {
        long long n = climbStairs(i);
        cout << i << " stairs, have " << n << " ways to climb\n";
    }
    return 0;
}
