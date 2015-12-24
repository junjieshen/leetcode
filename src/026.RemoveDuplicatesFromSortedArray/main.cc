#include <iostream>
#include <vector>
#include <string>

using namespace std;

int removeDuplicates(vector<int>& nums) {
    if (nums.size() <= 1) return nums.size();

    int i = 1;
    int j = 0;
    while(i < nums.size()) {
        if (nums[i] == nums[j]) {
            i++;
        } else {
            j++;
            nums[j] = nums[i];
            i++;
        }
    }

    return j+1;
}

int main() {
    vector<int> vec;
    vec.push_back(1);
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(3);
    int len = removeDuplicates(vec);
    for (int i = 0; i < len; i++) {
        cout << vec[i] << endl;
    }

    return 0;
}
