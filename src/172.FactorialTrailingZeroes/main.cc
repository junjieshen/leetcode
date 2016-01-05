#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <map>
#include <stack>
#include "list_node.h"
#include "tree_node.h"

using namespace std;

int trailingZeroes(int n) {
    if (n < 0) return 0;
    int count = 0;
    while(n) {
        n = n/5;
        count += n;
    }
    return count;
}

int main() {
    cout << trailingZeroes(103) << endl;
    return 0;
}
