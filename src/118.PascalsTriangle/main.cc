#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <map>
#include <stack>
#include "list_node.h"
#include "tree_node.h"

using namespace std;

vector<vector<int> > generate(int numRows) {
    if (numRows <= 0) return vector<vector<int> >();

    vector<vector<int> > rows;
    for (int i = 1; i <= numRows; i++) {
        vector<int> r(i);
        for (int j = 1; j <= i; j++) {
            if (j == 1 || j == i) {
                r[j-1] = 1;
            } else {
                r[j-1] = rows[i-2][j-2] + rows[i-2][j-1];
            }
        }
        rows.push_back(r);
    }

    return rows;
}

int main() {
    vector<vector<int> > rows = generate(5);
    for (int i = 0; i < rows.size(); i++) {
        for (int j = 0; j < rows[i].size(); j++) {
            cout << rows[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
