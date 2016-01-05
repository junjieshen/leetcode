#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <map>
#include <stack>
#include "list_node.h"
#include "tree_node.h"

using namespace std;

uint32_t reverseBits(uint32_t n) {
    unsigned int scale = 0x00000001;
    unsigned int res = 0;

    for (int i = 0; i < 32; i++) {
        res <<= 1;
        if (n & scale) {
            res |= scale;
        } 
        n >>= 1;
    }
    return res;
}

int main() {
    unsigned int ret = reverseBits(0xffff0000);
    cout << hex << ret << dec << endl;
    return 0;
}
