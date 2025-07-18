#include <iostream>
#include <vector>
using namespace std;

// dynamic in nature and no fix size

int main()
{

  // this all functions work in O(1) time complexity

  vector<int> vec;
  vec.push_back(1);
  vec.push_back(2);
  vec.push_back(3);
  vec.push_back(4);

  // we can also intitialize
  vector<int> vec1 = {1, 2, 3, 4, 5, 8};
  cout << "\n";

  // with the value of all 10 in the 3 blocks
  vector<int> vec2(3, 10);
  for (int i : vec2)
  {
    cout << i << " ";
  }
  vec.push_back(5);

  vec.push_back(4);

  // to print the numbers in the vector
  for (int i : vec)
  {
    cout << i << " ";
  }

  vec.pop_back(); // delete the elemnt from the back

  cout << vec.size() << "\n";
  cout << vec.capacity() << "\n";

  // access aby element
  cout << vec[3] << "\n";

  // front and back
  cout << vec.front() << "\n";
  cout << vec.back() << "\n";

  vector<int> vec4(vec1);
  for (int i : vec4)
  {
    cout << i << " ";
  }

  // o(n)
  for (int i : vec1)
  {
    cout << i << " " << "\n";
  }
  cout << "\n";

  // erarse
  vec1.erase(vec1.begin() + 2);                   // erase one element
  vec1.erase(vec1.begin() + 1, vec1.begin() + 3); // erase more than one element
  for (int i : vec1)
  {
    cout << i << " ";
  }
  cout << "\n";

  // insert
  vec1.insert(vec1.begin() + 1, 2); // give mi the position and then the value
  vec1.insert(vec1.begin() + 2, 3); // give mi the position and then the value
  vec1.insert(vec1.begin() + 3, 4); // give mi the position and then the value

  for (int i : vec1)
  {
    cout << i << " ";
  }
  cout << "\n";

  // empty

  if (vec1.empty())
  {
    cout << "is empty ";
  }
  else
  {
    cout << "is nnotempty ";
  }
  cout << "\n";

  // clear
  vec1.clear(); // remove all elemnets in the vector but capasity remian the same
}