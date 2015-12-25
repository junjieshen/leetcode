#include <iostream>
#include <vector>
#include <string>

using namespace std;

int removeElement(vector<int>& nums, int val) {
    int i = 0;
    int j = 0;
    while(i < nums.size()) {
        if (nums[i] == val) {
            i++;
        } else {
            nums[j] = nums[i];
            i++;
            j++;
        }
    }

    return j;
}

int main() {
    vector<int> vec;
    vec.push_back(1);
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(3);
    int len = removeElement(vec, 1);
    for (int i = 0; i < len; i++) {
        cout << vec[i] << endl;
    }

    return 0;
}
