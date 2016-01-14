#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <map>
#include <stack>
#include "list_node.h"
#include "tree_node.h"

using namespace std;

vector<int> singleNumber(vector<int>& nums) {
    int hash = 0;
    for (int i = 0; i < nums.size(); i++) {
        hash ^= nums[i];
    }

    int mask = hash&(hash-1)^hash;

    int hash_1 = 0;
    int hash_2 = 0;
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] & mask) {
            hash_1 ^= nums[i];
        } else {
            hash_2 ^= nums[i];
        }
    }

    return vector<int>{hash_1, hash_2};
}

int main() {

    return 0;
}
