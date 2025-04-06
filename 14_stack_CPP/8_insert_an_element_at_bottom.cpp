#include <iostream>
#include <stack>
using namespace std;

class Solution {
public:

    void solve(stack<int>& st, int x) {
        // Base Case: If stack is empty, push x and return
        if (st.empty()) {
            st.push(x);
            return;
        }

        // Recursive Case: Pop top element, insert at bottom, then push back
        int num = st.top();
        st.pop();
        solve(st, x);
        st.push(num);
    }

    stack<int> insertAtBottom(stack<int>& st, int x) {
        solve(st, x);
        return st;  
    }
};

// Driver Code to Test
int main() {
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);

    Solution sol;
    sol.insertAtBottom(st, 0); // Insert 0 at the bottom

    // Print stack from top to bottom
    cout << "Stack after insertion: ";
    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }

    return 0;
}
