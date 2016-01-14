#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <map>
#include <stack>
#include "list_node.h"
#include "tree_node.h"

using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    map<int, int> m;
    vector<int> res;
    for (int i = 0; i < nums.size(); i++) {
        if (m.find(nums[i]) != m.end()) {
            res.push_back(m[nums[i]]);
            res.push_back(i+1);
        } else {
            m[target - nums[i]] = i+1;
        }
    }

    return res;
}

int main() {
    vector<int> nums{2, 7, 11, 15};
    vector<int> res = twoSum(nums, 9);
    for (int i = 0; i < res.size(); i++) {
        cout << res[i] << " ";
    }
    cout << endl;
    return 0;
}
