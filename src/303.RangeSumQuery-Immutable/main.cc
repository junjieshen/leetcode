#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <map>
#include <stack>
#include "list_node.h"
#include "tree_node.h"
#include "num_array.h"

using namespace std;

int main() {
    vector<int> nums(5,1);
    NumArray na(nums);
    cout << na.sumRange(0,1) << endl;
    cout << na.sumRange(0,4) << endl;
    cout << na.sumRange(2,4) << endl;

    return 0;
}
