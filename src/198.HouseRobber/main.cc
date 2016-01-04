#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <map>
#include <stack>
#include "list_node.h"
#include "tree_node.h"

using namespace std;

int rob(vector<int>& nums) {
    if (nums.size() == 0) return 0;
    if (nums.size() == 1) return nums[0];
    int len = nums.size();
    vector<int> sums(len + 1, 0);
    sums[1] = nums[0];
    sums[2] = nums[1];
    for (int i = 3; i <= len; i++) {
        sums[i] = max(sums[i-2], sums[i-3]) + nums[i-1];
    }
    return max(sums[len], sums[len - 1]);
}

int main() {
    vector<int> nums;
    nums.push_back(50);
    nums.push_back(1);
    nums.push_back(1);
    nums.push_back(50);
    cout << rob(nums) << endl;
    return 0;
}
