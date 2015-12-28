#include <iostream>
#include <vector>
#include <string>

using namespace std;

string countAndSay(int n) {
    if (n == 0) return "";

    string num("1");
    string next;
    while(n > 1) {
        int count = 1;
        char curr_char = num[0];
        for (int i = 1; i < num.size(); i++) {
            if (num[i] != curr_char) {
                next.append(to_string(count));
                next.append(1, curr_char);
                count = 1;
                curr_char = num[i];
                continue;
            }
            count++;
        }

        next.append(to_string(count));
        next.append(1,curr_char);
        num = next;
        next = "";
        n--;
    }
    return num;
}

int main() {
    string res = countAndSay(5);
    cout << res << endl;

    return 0;
}
