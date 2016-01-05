#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <map>
#include <stack>
#include <unordered_map>
#include <utility>
#include "list_node.h"
#include "tree_node.h"

using namespace std;

typedef unordered_multimap<int, int> umm_ii_t;
typedef unordered_multimap<int, int>::iterator umm_ii_iter_t;

bool containsNearbyDuplicate(vector<int>& nums, int k) {
    if (k <= 0) return false;

    umm_ii_t m;
    for (int i = 0; i < nums.size(); i++) {
        pair<umm_ii_iter_t, umm_ii_iter_t> range = m.equal_range(nums[i]);
        for (umm_ii_iter_t it = range.first; it != range.second; it++) {
            if (abs(it->second - i) <= k) {
                return true;
            }
        }
        m.insert(make_pair(nums[i], i));
    }
    return false;
}

int main() {
    vector<int> nums(4,0); 
    nums[0] = 2;
    nums[1] = 3;
    nums[2] = 2;
    nums[3] = 4;

    cout << containsNearbyDuplicate(nums, 2) << endl;
    return 0;
}
