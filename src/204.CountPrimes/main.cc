#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <map>
#include <stack>
#include "list_node.h"
#include "tree_node.h"

using namespace std;

int countPrimes(int n) {
    vector<bool> isPrime(n, true);

    for (int i = 2; i * i < n; i++) {
        if (!isPrime[i]) continue;
        for (int j = i * i; j < n; j += i) {
            isPrime[j] = false;
        }
    }

    int count = 0;
    for (int i = 2; i < isPrime.size(); i++) {
        if (isPrime[i]) {
            count++;
        }
    }
    return count;
}

int main() {
    cout << countPrimes(100) << endl;
    return 0;
}
