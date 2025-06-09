#include <iostream>
#include <stack>
using namespace std;

void insertAtBottom(stack<int>& st, int x) {
    // Base Case: If stack is empty, push x and return
    if (st.empty()) {
        st.push(x);
        return;
    }

    // Recursive Case: Pop top element, insert at bottom, then push back
    int num = st.top();
    st.pop();
    insertAtBottom(st, x);
    st.push(num);
}

void Reverse(stack<int> &St) {
    // Base Case: Stop when stack is empty
    if (St.empty()) {
        return;
    }

    // Remove top element
    int num = St.top();
    St.pop();

    // Recursive call to reverse remaining stack
    Reverse(St);

    // Insert the removed element at bottom
    insertAtBottom(St, num);
}

// Driver Code to Test
int main() {
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);

    cout << "Original Stack: ";
    stack<int> temp = st;
    while (!temp.empty()) {
        cout << temp.top() << " ";
        temp.pop();
    }

    Reverse(st); // Reverse the stack

    cout << "\nReversed Stack: ";
    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }

    return 0;
}
