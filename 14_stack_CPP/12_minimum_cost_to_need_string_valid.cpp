#include <bits/stdc++.h>
using namespace std;

int findMinimumCost(string str)
{
  // Odd length strings can never be balanced
  if (str.length() % 2 == 1)
    return -1;

  stack<char> s;

  // Process the string
  for (char ch : str)
  {
    if (ch == '{')
    {
      s.push(ch);
    }
    else
    {
      // If top is '{', it's a valid pair '{}', so pop
      if (!s.empty() && s.top() == '{')
      {
        s.pop();
      }
      else
      {
        s.push(ch); // Push '}' if it can't be balanced
      }
    }
  }

  // Now, stack contains unbalanced brackets
  int openCount = 0, closeCount = 0;

  while (!s.empty())
  {
    if (s.top() == '{')
      openCount++;
    else
      closeCount++;
    s.pop();
  }

  // Minimum cost formula: (openCount+1)/2 + (closeCount+1)/2
  return (openCount + 1) / 2 + (closeCount + 1) / 2;
}

// Driver Code
int main()
{
  cout << findMinimumCost("{{{{") << endl;     // Output: 2
  cout << findMinimumCost("}{{}}{{{") << endl; // Output: 3
  cout << findMinimumCost("{{}}") << endl;     // Output: 0
  cout << findMinimumCost("{{{}}") << endl;    // Output: -1 (odd length)

  return 0;
}
