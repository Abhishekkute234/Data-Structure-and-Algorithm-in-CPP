

// ------>>>> Queue  <<<<<<---------
// line me jo pehele lgata hai uski pehele bari aati hai
#include <iostream>
#include <queue>

using namespace std;
int main()
{

  queue<string> q;

  q.push("love");
  q.push("Abhishek");
  q.push("Kute");

  cout << "First element " << q.front() << "\n";
  q.pop(); // it remove the 1st element
  cout << "First element " << q.front() << "\n";
}