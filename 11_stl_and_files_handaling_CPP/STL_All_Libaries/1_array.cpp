// -------->>>>>>  Array    <<<<<<---------
#include <iostream>
using namespace std;
#include <array>
int main()
{
  int arr[3] = {1, 2, 3};

  array<int, 4> a = {1, 2, 3, 4};
  int size = a.size();
  for (int i = 0; i < size; i++)
  {
    cout << a[i] << "\n";
  }

  cout << "Enter second element " << a.at(2) << "\n"; // at operator
  cout << "Empty or not " << a.empty() << "\n";
  // if "0" then false
  // if "1"  then true
  cout << "First element " << a.front() << "\n"; // ist element
  cout << "Last  element " << a.back() << "\n";  // last element
}