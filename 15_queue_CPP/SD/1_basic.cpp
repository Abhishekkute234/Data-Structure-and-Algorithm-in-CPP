// first in first out

#include <iostream>
#include <queue>

using namespace std;

int main()
{
  // we have front and rear in this
  queue<int> q;

  q.push(1);
  q.push(2);

  q.push(3);

  q.push(4);

  q.push(5);

  q.push(6);

  while (!q.empty())
  {
    cout << q.front() << " ";
    q.pop();
  }
}
