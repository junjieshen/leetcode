#include <iostream>
#include <vector>
#include <string>

using namespace std;

string getHint(string secret, string guess) {
    vector<int> count_sec(128, 0);
    vector<int> count_gus(128, 0);
    int bulls = 0;
    int cows = 0;
    for (int i = 0; i < secret.size(); i++) {
        if (secret[i] == guess[i]) {
            bulls ++;
        } else {
            count_sec[secret[i]] ++;
            count_gus[guess[i]] ++;
        }
    }

    for (int i = 0; i < 128; i++) {
        if (count_sec[i] != 0 && count_gus[i] != 0) {
            if (count_sec[i] > count_gus[i]) {
                cows += count_gus[i];
            } else {
                cows += count_sec[i];
            }
        }
    }
    string rnt(to_string(bulls) + "A" + to_string(cows) + "B");
    return rnt;
}

int main() {
    string res = getHint("0123456", "6543210");
    cout << res << endl;

    return 0;
}
