#include <vector>
#include <iostream>
#include <cassert>
#include "stack.hh"

typedef std::vector<int>    int_vec_t;
typedef std::vector<char>   char_vec_t;
typedef std::vector<bool>   bool_vec_t;

int main(void)
{
    Stack<int> s;
    s.push(5);
    s.push(6);
    s.push(7);
    int v = s.pop();
    assert(v==7);
    v = s.pop();
    assert(v==6);
    v = s.pop();
    assert(v==5);
    bool e = s.isEmpty();
    assert(e == true);

    return 0;
}
