#include <iostream>
#include <deque>
using namespace std;
// deque - double ended queue
// dequeue  -pop element

// in liSt no random access is possioble l[2] ❌
// but the queue the random access is possible d[2] ✅

// implemented in the form of doubly linked list
// push/ back from the front and back also

int main()
{
  deque<int> d = {1, 2, 3, 4};

  d.push_back(1);
  d.push_back(2);
  d.push_back(3);
  d.push_front(4);
  d.push_front(5);
  d.push_front(6);

  for (int i : d)
  {
    cout << i << " ";
  }
  cout << "\n";

  d.pop_back();
  d.pop_front();
  for (int i : d)
  {
    cout << i << " ";
  }
  cout << "\n";
}