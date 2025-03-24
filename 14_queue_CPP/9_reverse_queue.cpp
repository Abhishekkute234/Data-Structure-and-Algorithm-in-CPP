#include <iostream>
#include <queue>
#include <stack>

using namespace std;
class Solution
{
public:
  queue<int> reverseQueue(queue<int> &q)
  {
    stack<int> s;

    // first add the queue to the stack
    while (!q.empty())
    {
      int element = q.front();
      q.pop();
      s.push(element);
    }
    // then again add it to the queue
    while (!s.empty())
    {
      int element = s.top();
      s.pop();
      q.push(element);
    }
    return q;
  }
};
