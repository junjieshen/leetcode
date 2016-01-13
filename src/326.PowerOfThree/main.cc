#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <map>
#include <stack>
#include "list_node.h"
#include "tree_node.h"

using namespace std;

bool isPowerOfThree(int n) {
    if (n <= 0) return false;

    while(n > 1) {
        if (n % 3 != 0) {
            return false;
        }
        n/=3;
    }

    return true;
}

int main() {
    cout << isPowerOfThree(27) << endl;
    return 0;
}
