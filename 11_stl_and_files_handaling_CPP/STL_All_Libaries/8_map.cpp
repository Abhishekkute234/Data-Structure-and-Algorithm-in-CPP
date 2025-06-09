
// ------>>>> Map <<<<<<-------

// in map the data in store in the key value
// one key always point one value
// sometime value should be same/ or same point but the name is always different

#include <iostream>
#include <map> //sorted
using namespace std;
int main()
{
  map<int, string> m;

  m[1] = "bapper";
  m[13] = "kumar";
  m[2] = "love";
  m.insert({5, "bheem"}); // to insert any thing
  // here m is the key and the babber is the value
  for (auto i : m)
  {
    cout << i.first << " " << i.second << "\n"; // here 1st and second represnt the int and string
  }
  cout << "\n";

  cout << "finding 13 " << m.count(13) << "\n";
}
