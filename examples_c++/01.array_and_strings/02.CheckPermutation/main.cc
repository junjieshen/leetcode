#include <vector>
#include <iostream>
#include <cassert>

typedef std::vector<int>    int_vec_t;
typedef std::vector<char>   char_vec_t;
typedef std::vector<bool>   bool_vec_t;

bool checkPermutation(std::string str1, std::string str2) {
    if (str1.size() != str2.size()) 
        return false;

    int_vec_t cnt_vec_1(128, 0);
    int_vec_t cnt_vec_2(128, 0);

    for (int i = 0; i < str1.size(); i++) {
        cnt_vec_1[str1[i]] ++;
        cnt_vec_2[str2[i]] ++;
    }

    for (int i = 0; i < 128; i++) {
        if (cnt_vec_1[i] != cnt_vec_2[i])
            return false;
    }
    return true;
}

int main(void)
{
    std::string str1("password");
    std::string str2("drowssap");
    if (checkPermutation(str1, str2)) {
        std::cout << "They are permutation strings\n";
    } else {
        std::cout << "They are not permutation strings\n";
    }
    std::string str3("password1");
    std::string str4("drowssap");
    if (checkPermutation(str3, str4)) {
        std::cout << "They are permutation strings\n";
    } else {
        std::cout << "They are not permutation strings\n";
    }

    return 0;
}
