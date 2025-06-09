
// ------>>>> Set   <<<<<<-------
// we cant modify or repet the element inside the set
// we can just remove or add element in the set
#include <iostream>
#include <set>
using namespace std;
int main()
{
  set<int> s;

  s.insert(5);
  s.insert(9);
  s.insert(4);
  s.insert(3);

  for (int i : s)
  {
    cout << i << " ";
  }
  cout << "\n";

  s.erase(s.begin());
  for (int i : s)
  {
    cout << i << " ";
  }
  cout << "\n";
  cout << "5 is presenet" << s.count(5) << "\n";
}