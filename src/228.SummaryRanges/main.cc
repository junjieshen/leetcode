#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <map>
#include <stack>
#include "list_node.h"
#include "tree_node.h"

using namespace std;

vector<string> summaryRanges(vector<int>& nums) {
    if (nums.size() == 0) {return vector<string>();}
    vector<string> ret;
    int start_idx = 0;
    int end_idx = 0;
    for (int i = 1; i < nums.size(); i++) {
        if (nums[i] - nums[start_idx] != i - start_idx) {
            string range;
            if (end_idx != start_idx) {
                range = to_string(nums[start_idx]) + "->" + to_string(nums[end_idx]);
            } else {
                range = to_string(nums[start_idx]);
            }
            ret.push_back(range);
            start_idx = i;
            end_idx = i;
        } else {
            end_idx++;
        }
    }

    if (start_idx != end_idx) {
        ret.push_back(to_string(nums[start_idx]) + "->" + to_string(nums[end_idx]));
    } else {
        ret.push_back(to_string(nums[start_idx]));
    }

    return ret;
}

int main() {
    vector<int> nums;
    nums.push_back(0);
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(4);
    nums.push_back(5);
    nums.push_back(7);
    vector<string> res = summaryRanges(nums);
    for (int i = 0; i < res.size(); i++) {
        cout << res[i] << " ";
    }
    cout << endl;
    return 0;
}
