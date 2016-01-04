#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <map>
#include <stack>
#include "list_node.h"
#include "tree_node.h"

using namespace std;
int getSum(int n) {
    int sum = 0;
    while(n > 0) {
        sum += (n%10)*(n%10);
        n = n/10;
    }
    return sum;
}
bool isHappy(int n) {
    map<int, bool> m;
    m[n] = true;
    while(true) {
        n = getSum(n);
        if (n == 1) {
            return true;
        }
        if (m.find(n) != m.end()) {
            return false;
        }
        m[n] = true;
    }

}
int main() {
    cout << isHappy(25) << endl;
    cout << isHappy(19) << endl;
    
    return 0;
}
