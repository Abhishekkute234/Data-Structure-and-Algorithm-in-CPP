// valid parentisis
#include <iostream>
#include <stack>
using namespace std;

class Solution
{
public:
  bool isValid(string s)
  {
    stack<char> stak;

    for (int i = 0; i < s.length(); i++)
    {
      int ch = s[i];
      if (s[i] == '(' || s[i] == '[' || s[i] == '{')
      {
        stak.push(s[i]);
      }

      else
      {
        int top = stak.top();

        if (!stak.empty())
        {
          if (top == '(' && ch == ')' || top == '[' && ch == ']' || top == '{' && ch == '}')
          {
            stak.pop();
          }
          else
          {
            return false;
          }
        }
        else
        {
          return false;
        }
      }
    }
    if (stak.empty())
      return true;

    else
      return false;
  }
};

// Driver Code to test
int main()
{
  Solution sol;
  string test1 = "()[]{}";   // True
  string test2 = "(]";       // False
  string test3 = "({[()]})"; // True
  string test4 = "({[})";    // False

  cout << sol.isValid(test1) << endl; // 1 (true)
  cout << sol.isValid(test2) << endl; // 0 (false)
  cout << sol.isValid(test3) << endl; // 1 (true)
  cout << sol.isValid(test4) << endl; // 0 (false)

  return 0;
}
