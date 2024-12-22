

// ------>>>> vector  <<<<<<---------

#include <iostream>
using namespace std;
#include <vector>
int main()
{
  // capacity get double when the size increases

  vector<int> v;           // the size of the new vector is always zero
  int size = v.capacity(); //  .capacity
  cout << "Size " << v.capacity() << "\n";

  v.push_back(1);                          // to add any element
  cout << "Size " << v.capacity() << "\n"; // 1

  v.push_back(2);
  cout << "Size " << v.capacity() << "\n"; // 2

  v.push_back(2);
  cout << "Size " << v.capacity() << "\n"; // 4

  // capacity means how many we can add and
  //  size show number of elements

  cout << "Enter second element " << v.at(2) << "\n"; // at operator

  v.pop_back(); /// it remove the last value
  cout << "value after pop back \n";
  for (int i : v)
  {
    cout << i << " \n";
  }

  v.clear(); /// it remove the last value
  cout << "value after clear \n";
  for (int i : v)
  {
    cout << i << " \n";
  }
}
