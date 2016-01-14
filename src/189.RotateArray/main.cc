#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <map>
#include <stack>
#include "list_node.h"
#include "tree_node.h"

using namespace std;

void rotate(vector<int>& nums, int k) {
    if (nums.size() == 0) return;

    k = k%nums.size();
    int left_size = nums.size() - k;
    for (int i = 0; i < left_size/2; i++) {
        int tmp = nums[left_size-i-1];
        nums[left_size-i-1] = nums[i];
        nums[i] = tmp;
    }
    for (int i = 0; i < k/2; i++) {
        int tmp = nums[nums.size()-i-1];
        nums[nums.size()-i-1] = nums[left_size+i];
        nums[left_size+i] = tmp;
    }
    for (int i = 0; i < nums.size()/2; i++) {
        int tmp = nums[nums.size()-i-1];
        nums[nums.size()-i-1] = nums[i];
        nums[i] = tmp;
    }
}

int main() {
    vector<int> nums;
    nums.push_back(0);
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(4);
    nums.push_back(5);
    nums.push_back(7);
    rotate(nums, 3);
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}
