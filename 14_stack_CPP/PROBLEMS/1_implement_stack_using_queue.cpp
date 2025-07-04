#include <iostream>
#include <vector>
using namespace std;

//  push(val ), pop(), top()
class stack
{
  vector<int> v;

public:
  void push(int value)
  {
    v.push_back(value);
  }
  void pop()
  {
    v.pop_back();
  }

  int top()
  {
    return v[v.size() - 1];
  }
  bool empty()
  {

    if (v.size() == 0)
    {
      return true;
    }
    else
    {
      false;
    }
  }
};