#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <map>
#include <stack>
#include "list_node.h"
#include "tree_node.h"

using namespace std;

int computeArea(int A, int B, int C, int D, int E, int F, int G, int H) {
    if ((E >= C || A >= G) || (B >= H || F >= D)) {
        return (C - A) * (D - B) + (G - E) * (H - F);
    }

    int right = min(G, C);
    int left = max(A, E);
    int top = min(D, H);
    int bottom = max(B, F);

    return (C - A) * (D - B) + (G - E) * (H - F) - (right - left) * (top - bottom);
}

int main() {
    cout << computeArea(-2, -2, 2, 2, -2, -2, 2, 2) << endl;
    return 0;
}
