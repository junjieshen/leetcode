#include <vector>
#include <iostream>
#include <cassert>

typedef std::vector<int> int_vec_t;

int main(void)
{
    int_vec_t vec;
    vec.push_back(3);
    std::cout << vec.capacity() << "\n";
    std::cout << vec.size() << "\n";
    vec.reserve(10);
    std::cout << vec.capacity() << "\n";
    std::cout << vec.size() << "\n";

    return 0;
}
