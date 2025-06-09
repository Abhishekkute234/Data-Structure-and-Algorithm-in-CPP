
// ------>>>> List   <<<<<<---------
#include <iostream>
#include <list> //sorted
using namespace std;
int main()
{
  list<int> l;

  l.push_back(1);
  l.push_front(2);

  for (int i : l)
  {
    cout << i << "\n";
  }
  cout << "\n";

  l.erase(l.begin());
  cout << "after erase"
       << "\n";
  for (int i : l)
  {
    cout << i << "\n";
  }
}
