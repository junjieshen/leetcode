#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <map>
#include <stack>
#include "list_node.h"
#include "tree_node.h"

using namespace std;

int hammingWeight(uint32_t n) {
    int count = 0;
    for (int i = 0; i < 32; i++) {
        if ((n & 0x00000001) == 0x00000001) {
            count++;
        }
        n = n>>1;
    }
    return count;
}

int main() {
    cout << hammingWeight(0xffffffff) << endl;
    cout << hammingWeight(0x0fffffff) << endl;
    return 0;
}
