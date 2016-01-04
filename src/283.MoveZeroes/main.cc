#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <map>
#include <stack>
#include "list_node.h"
#include "tree_node.h"

using namespace std;

void moveZeroes(vector<int>& nums) {
    int index = 0;
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] != 0) {
            nums[index] = nums[i];
            index++;
        }
    }
    for (int i = index; i < nums.size(); i++) {
        nums[i] = 0;
    }
}

int main() {
    vector<int> nums(4);
    nums[0] = 1;
    nums[1] = 0;
    nums[2] = 3;
    nums[3] = 4;
    moveZeroes(nums);
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }
    cout << endl;
    return 0;
}
