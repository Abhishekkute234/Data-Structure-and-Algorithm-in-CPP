#include <iostream>
#include <stack>
using namespace std;

class Solution {
public:
    int checkRedundancy(string s) {
        stack<char> str;
        
        for (int i = 0; i < s.length(); i++) {
            char ch = s[i];

            // Push opening bracket or operator to stack
            if (ch == '(' || ch == '+' || ch == '-' || ch == '*' || ch == '/') {
                str.push(ch);
            } 
            else if (ch == ')') { 
                // Checking for redundancy inside ()
                bool hasOperator = false;

                while (!str.empty() && str.top() != '(') {
                    char top = str.top();
                    if (top == '+' || top == '-' || top == '*' || top == '/') {
                        hasOperator = true;
                    }
                    str.pop();
                }

                // If no operator was found inside parentheses, it's redundant
                if (!hasOperator) return 1; 

                // Remove the '(' from the stack
                if (!str.empty()) str.pop();
            }
        }
        
        return 0; // No redundant brackets found
    }
};

// Driver Code
int main() {
    Solution obj;
    string exp1 = "(a+(b)/c)";   // ✅ Contains redundant brackets -> 1
    string exp2 = "(a+b)";       // ❌ No redundancy -> 0
    string exp3 = "(a+(b*c))";   // ❌ No redundancy -> 0
    string exp4 = "((a+b))";     // ✅ Contains redundant brackets -> 1

    cout << obj.checkRedundancy(exp1) << endl;
    cout << obj.checkRedundancy(exp2) << endl;
    cout << obj.checkRedundancy(exp3) << endl;
    cout << obj.checkRedundancy(exp4) << endl;

    return 0;
}
