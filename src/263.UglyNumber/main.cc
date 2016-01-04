#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <map>
#include <stack>
#include "list_node.h"
#include "tree_node.h"

using namespace std;

bool isUgly(int num) {
    if (num <= 0) return false;
    while(num >= 2) {
        if (num%2 == 0) num/=2;
        else if (num%3 == 0) num/=3;
        else if (num%5 == 0) num/=5;
        else return false;
    }
    return (num == 1);
}

int main() {
    cout << isUgly(14) << endl;
    cout << isUgly(8) << endl;
    return 0;
}
