#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <map>
#include <stack>
#include "list_node.h"
#include "tree_node.h"

using namespace std;

bool containsDuplicate(vector<int>& nums) {
    map<int, bool> m;
    for (int i = 0; i < nums.size(); i++) {
        if (m.find(nums[i]) != m.end()) {
            return true;
        } else {
            m[nums[i]] = true;
        }
    }
    return false;
}

int main() {
    vector<int> nums(4,0);
    cout << containsDuplicate(nums) << endl;
    return 0;
}
