#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <map>
#include <stack>
#include "list_node.h"
#include "tree_node.h"

using namespace std;

/* O(n) voting algorithm */
int majorityElement(vector<int>& nums) {
    int count = 0;
    int result = 0;
    for (int i = 0; i < nums.size(); i++) {
        if (count == 0) {
            result = nums[i];
            count++;
        } else if (result == nums[i]) {
            count++;
        } else {
            count--;
        }
    }
    return result;
}

int main() {
    vector<int> nums;
    for (int i = 0; i < 10; i++) {
        nums.push_back(5);
    }
    for (int i = 0; i < 5; i++) {
        nums.push_back(10);
    }
    cout << majorityElement(nums) << endl;
    return 0;
}
