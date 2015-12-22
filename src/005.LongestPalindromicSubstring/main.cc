#include <iostream>
#include <ctime>
#include <string>
#include <algorithm>

using namespace std;

string longestPalindrome(string s) {
    if (s.empty()) return s;

    int half_start = 0;
    int half_size = 0;
    for (int k = 0; k < s.size(); k++) {
        for (int i = s.size(); i >= 1; i--) {
            for (int j = k; j <= s.size() - i; j++) {
                if (i%2 == 0) {
                    half_start = i/2 + j;
                    half_size = i/2;
                } else {
                    half_start = i/2 + j;
                    half_size = i/2 + 1;
                }
                string first = s.substr(j, half_size);
                string second = s.substr(half_start, half_size);
                std::reverse(second.begin(), second.end());
                if (first == second) {
                    return s.substr(j, half_start + half_size - j);
                }
            }
        }
    }
}

string expandPanlidrome(string s, int begin, int end) {
    while (begin >= 0 && end < s.size() && s[begin] == s[end]) {
        begin --;
        end ++;
    }
    return s.substr(begin + 1, end - begin - 1);
}

string longestPalindrome_1(string s) {
    if (s.empty() || s.size() == 1) return s;

    string longest = s.substr(0,1);
    for (int i = 0; i < s.size(); i++) {
        string tmp = expandPanlidrome(s, i, i);
        if (tmp.size() > longest.size()) {
            longest = tmp;
        }
        tmp = expandPanlidrome(s, i, i+1);
        if (tmp.size() > longest.size()) {
            longest = tmp;
        }
    }
    return longest;
}

int main() {
    string str("civilwartestingwhetherthatnaptionoranynartionsoconceivedandsodedicatedcanlongendureWeareqmetonagreatbattlefiemldoftzhatwarWehavecometodedicpateaportionofthatfieldasafinalrestingplaceforthosewhoheregavetheirlivesthatthatnationmightliveItisaltogetherfangandproperthatweshoulddothisButinalargersensewecannotdedicatewecannotconsecratewecannothallowthisgroundThebravelmenlivinganddeadwhostruggledherehaveconsecrateditfaraboveourpoorponwertoaddordetractTgheworldadswfilllittlenotlenorlongrememberwhatwesayherebutitcanneverforgetwhattheydidhereItisforusthelivingrathertobededicatedheretotheulnfinishedworkwhichtheywhofoughtherehavethusfarsonoblyadvancedItisratherforustobeherededicatedtothegreattdafskremainingbeforeusthatfromthesehonoreddeadwetakeincreaseddevotiontothatcauseforwhichtheygavethelastpfullmeasureofdevotionthatweherehighlyresolvethatthesedeadshallnothavediedinvainthatthisnationunsderGodshallhaveanewbirthoffreedomandthatgovernmentofthepeoplebythepeopleforthepeopleshallnotperishfromtheearth");

    clock_t begin = clock();
    string s = longestPalindrome(str);
    clock_t end = clock();
    double elapsed_secs = double(end - begin) / CLOCKS_PER_SEC;
    std::cout << s << ", and it takes " << elapsed_secs << " seconds\n";

    begin = clock();
    s = longestPalindrome_1(str);
    end = clock();
    elapsed_secs = double(end - begin) / CLOCKS_PER_SEC;
    std::cout << s << ", and it takes " << elapsed_secs << " seconds\n";

    return 0;
}
