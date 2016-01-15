#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <map>
#include <stack>
#include "list_node.h"
#include "tree_node.h"

using namespace std;

int getKthElement(vector<int>& nums1, vector<int>& nums2, int begin1, int end1, int begin2, int end2, int k) {
    int m = end1 - begin1 + 1;
    int n = end2 - begin2 + 1;
    if (m <= 0) {
        return nums2[begin2 + k];
    } else if (n <= 0) {
        return nums1[begin1 + k];
    } else if (k == 0) {
        return (nums1[begin1] < nums2[begin2]) ? nums1[begin1] : nums2[begin2];
    }

    int aMid = m * k / (m + n);
    int bMid = k - aMid - 1;
    aMid = aMid + begin1;
    bMid = bMid + begin2;

    if (nums1[aMid] > nums2[bMid]) {
        k = k - (bMid - begin2 + 1);
        end1 = aMid;
        begin2 = bMid + 1;
    } else {
        k = k - (aMid - begin1 + 1);
        end2 = bMid;
        begin1 = aMid + 1;
    }

    return getKthElement(nums1, nums2, begin1, end1, begin2, end2, k);
}

double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    int size1 = nums1.size();
    int size2 = nums2.size();
    int k = (size1 + size2)/2;
    if ((size1 + size2)%2 == 0) {
        return (getKthElement(nums1, nums2, 0, nums1.size() - 1, 0, nums2.size() - 1, k) + 
                getKthElement(nums1, nums2, 0, nums1.size() - 1, 0, nums2.size() - 1, k-1)) * 0.5;
    } else {
        return (double)getKthElement(nums1, nums2, 0, nums1.size() - 1, 0, nums2.size() - 1, k); 
    }

}

int main() {

    return 0;
}
