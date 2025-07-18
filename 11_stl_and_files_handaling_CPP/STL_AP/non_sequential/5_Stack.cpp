#include <iostream>
#include <stack>
using namespace std;

int main()
{
  stack<int> stk;

  stk.push(1);
  stk.push(2);

  stk.push(3);

  stk.push(4);

  stk.push(5);

  stk.push(6);

  for (int i = 0; i < stk.size(); i++)
  {
    cout << stk.top() << " ";
    stk.pop();
  }