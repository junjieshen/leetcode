#include <stack>

using namespace std;
class StackQueue {
    private:
        stack<int> s1;
        stack<int> s2;

    public:
        void push(int x) {
            s1.push(x);
        }

        void pop(void) {
            while(!s1.empty()) {
                s2.push(s1.top());
                s1.pop();
            }
            s2.pop();
            while(!s2.empty()) {
                s1.push(s2.top());
                s2.pop();
            }
        }

        int peek(void) {
            while(!s1.empty()) {
                s2.push(s1.top());
                s1.pop();
            }
            int res = s2.top();
            while(!s2.empty()) {
                s1.push(s2.top());
                s2.pop();
            }
            return res;
        }

        bool empty(void) {
            return s1.empty();
        }
};
