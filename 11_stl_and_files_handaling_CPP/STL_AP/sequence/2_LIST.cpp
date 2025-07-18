#include <iostream>
#include <list>
using namespace std;

// implemented in the form of doubly linked list
// push/ back from the front and back also

// in liSt no random access is possioble
// but the queue the random access is possible

int main()
{
  list<int> lis1 = {1, 2, 34, 5, 7, 78};

  list<int> lis;
  lis.push_back(1);
  lis.push_back(2);
  lis.push_back(3);
  lis.push_front(4);
  lis.push_front(5);
  lis.push_front(6);

  for (int i : lis)
  {
    cout << i << " ";
  }
  cout << "\n";

  lis.pop_back();
  lis.pop_front();
  for (int i : lis)
  {
    cout << i << " ";
  }
  cout << "\n";
  // size
  // erase
  // clear
  // begin
  // end
  // insert
  // front
}