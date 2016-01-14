#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <map>
#include <stack>
#include "list_node.h"
#include "tree_node.h"

using namespace std;

int findBadInRange(int start, int end) {
    if (start == end) return start;
    int half = (end - start) / 2 + start;
    if (isBadVersion(half) == true) {
        return findBadInRange(start, half);
    } else {
        return findBadInRange(half + 1, end);
    }
}

int firstBadVersion(int n) {
    return findBadInRange(0, n);
}

int main() {

    return 0;
}
