#include <iostream>
#include <deque>
#include <vector>
using namespace std;

int main()
{
  pair<int, int> p = {3, 4};
  pair<char, int> p1 = {'a', 1};

  // access the values

  cout << p1.first << endl;
  cout << p1.second << endl;

  // pair of pair

  pair<int, pair<char, int>> p2 = {1, {'a', 2}};

  cout << p2.first << "\n";
  // acces the pair in a pair

  cout << p2.second.first << "\n";

  // vectores of pair
  vector<pair<int, int>> vec = {{1, 2}, {3, 4}, {4, 5}};

  for (pair<int, int> i : vec)
  {
    cout << i.first << " " << i.second << "\n";
  }

  cout << "update " << "\n";
  vec.push_back({6, 7});
  vec.emplace_back(8, 9); // it automaticaly make the pair
  for (pair<int, int> i : vec)
  {
    cout << i.first << " " << i.second << "\n";
  }
}