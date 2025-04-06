#include <iostream>
#include <queue>
#include <stack>

using namespace std;
class Solution
{
public:
  // Function to reverse first k elements of a queue.
  queue<int> modifyQueue(queue<int> q, int k)
  {
    stack<int> s;

    // starting k elemnt stack me dal diye

    for (int i = 0; i < k; i++)
    {
      int element = q.front();
      q.pop();
      s.push(element);
    }

    // fri q mai dal diye reverse hogye

    while (!s.empty())
    {
      int element = s.top();
      s.pop();
      q.push(element);
    }

    //   fetch fisrtt (n-k) elemnts
    int t = q.size() - k;
    while (t--)
    {
      int val = q.front();
      q.pop();
      q.push(val);
    }

    return q;
  }
};
