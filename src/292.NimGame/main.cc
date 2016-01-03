#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <map>
#include <stack>
#include "list_node.h"
#include "tree_node.h"

using namespace std;

bool canWinNim(int n) {
    if (n%4 == 0 && n/4 >= 1) {
        return false;
    } 
    return true;
}

int main() {
    cout << canWinNim(100) << endl;
    return 0;
}
