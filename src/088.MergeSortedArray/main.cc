#include <iostream>
#include <vector>
#include <string>

using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int i = m - 1;
    int j = n - 1;
    int k = m + n - 1;
    for (; k >= 0; k--) {
        if ((i > -1) && (j > -1)) {
            if (nums1[i] > nums2[j]) {
                nums1[k] = nums1[i];
                i--;
            } else {
                nums1[k] = nums2[j];
                j--;
            }
        } else if (i == -1) {
            nums1[k] = nums2[j];
            j--;
        } else {
            nums1[k] = nums1[i];
            i--;
        }
    }
}

int main() {
    vector<int> nums1(6,0);
    vector<int> nums2(3,0);
    nums1[1] = 1;
    nums1[2] = 3;
    nums2[0] = -1;
    nums2[1] = 2;
    nums2[2] = 4;
    merge(nums1, 3, nums2, 3);
    for (vector<int>::iterator it = nums1.begin(); it != nums1.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
    return 0;
}
