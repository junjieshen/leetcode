#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <map>
#include <stack>
#include "list_node.h"
#include "tree_node.h"

using namespace std;

int singleNumber(vector<int>& nums) {
    if (nums.size() == 0) return -1;
    int hash = nums[0];
    for (int i = 1; i < nums.size(); i++) {
        hash = hash^nums[i];
    }
    return hash;
}

int main() {
    
    return 0;
}
