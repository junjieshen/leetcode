#include <vector>
#include <iostream>
#include <cassert>

typedef std::vector<int>    int_vec_t;
typedef std::vector<char>   char_vec_t;
typedef std::vector<bool>   bool_vec_t;

bool isUniqueString(std::string str) {
    bool_vec_t char_vec(128, false);

    if (str.size() > 128) 
        return false;

    for (int i = 0; i < str.size(); i++) {
        char val = str[i];
        if (char_vec[val] == true)
            return false;
        else
            char_vec[val] = true;
    }
    return true;
}

int main(void)
{
    std::string str("whatisme");
    if (isUniqueString(str)) {
        std::cout << "It is a unique string\n";
    } else {
        std::cout << "It is not a unique string\n";
    }
    std::string str1("whatismeme");
    if (isUniqueString(str1)) {
        std::cout << "It is a unique string\n";
    } else {
        std::cout << "It is not a unique string\n";
    }

    return 0;
}
