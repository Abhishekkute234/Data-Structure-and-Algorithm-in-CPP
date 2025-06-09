

////////////////////// Algorithums ////////////////////////
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int main()
{
  vector<int> v;
  v.push_back(1);
  v.push_back(6);
  v.push_back(7);
  v.push_back(9);

  cout << "find 6 " << binary_search(v.begin(), v.end(), 6) << "\n";

  cout << "Lower bound" << lower_bound(v.begin(), v.end(), 9) - v.begin() << "\n";
  cout << "upper bound" << upper_bound(v.begin(), v.end(), 1) - v.begin() << "\n";

  int a = 3;
  int b = 5;
  cout << "max " << max(a, b) << "\n";
  cout << "min " << min(a, b) << "\n";

  swap(a, b);
  cout << " a = " << a << "\n";
  cout << " b = " << b << "\n";

  string s = "abcd";
  reverse(s.begin(), s.end());
  cout << "string " << s << "\n";

  rotate(v.begin(), v.begin() + 1, v.end());
  cout << "after rotate"
       << "\n";
  for (int j : v)
  {
    cout << j << " ";
  }

  sort(v.begin(), v.begin() + 1, v.end());
  cout << "after sort"
       << "\n";
  for (int k : v)
  {
    cout << k << " ";
  }
}