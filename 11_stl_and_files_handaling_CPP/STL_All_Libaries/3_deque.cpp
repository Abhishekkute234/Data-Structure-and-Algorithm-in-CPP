

// ------>>>> deque  <<<<<<---------
#include <iostream>
#include <deque>
using namespace std;
int main()
{
  deque<int> d;

  d.push_back(1); // remove 1st element
  d.push_front(2);

  cout << "Print 1st index element is " << d.at(1) << "\n";

  // for(int i:d){
  //     cout<<i<<" ";
  // }
  // cout<<"\n";

  // d.pop_back();// last element
  // for(int i:d){
  //     cout<<i<<" ";
  // }
  // cout<<"\n";

  // d.pop_front();
  // for(int i:d){
  //     cout<<i<<" ";
  // }
  // cout<<"\n";
  cout << "Front element is " << d.front() << "\n";
  cout << "Back element is " << d.back() << "\n";
  // erase function
  cout << "Befour errase " << d.size() << "\n";
  d.erase(d.begin(), d.begin() + 1);
  cout << "after erase " << d.size() << "\n";
}
