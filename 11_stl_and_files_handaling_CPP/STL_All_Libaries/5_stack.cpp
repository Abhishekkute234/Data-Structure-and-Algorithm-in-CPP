

// ------>>>> Stack   <<<<<<---------
//  plate and book example
#include <iostream>
#include <stack>
using namespace std;
int main()
{
  stack<string> s;

  s.push("Abhishek");
  s.push("Anil");
  s.push("Kute");

  cout << "Top element " << s.top() << "\n";
  // jo sabse end me ajyega wo sabse pehele ayega

  s.pop();
  cout << "Top element " << s.top() << "\n";
}
