#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <map>
#include <stack>
#include "list_node.h"
#include "tree_node.h"

using namespace std;

vector<int> getRow(int rowIndex) {
    vector<int> row(rowIndex + 1);
    for (int i = 1; i <= rowIndex + 1; i++) {
        for (int j = i; j >= 1; j--) {
            if (j == 1 || j == i) {
                row[j - 1] = 1; 
            } else {
                row[j - 1] = row[j - 1] + row[j - 2];
            }
        }
    }
    return row;
}

int main() {
    vector<int> row = getRow(5);
    for (int i = 0; i < row.size(); i++) {
        cout << row[i] << " ";
    }
    cout << endl;
    return 0;
}
