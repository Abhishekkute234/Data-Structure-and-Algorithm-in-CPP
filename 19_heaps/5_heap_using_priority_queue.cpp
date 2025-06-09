#include <iostream>
#include <queue>
using namespace std;

int main()
{

  // max heap
  priority_queue<int> pq;
  pq.push(4);
  pq.push(2);
  pq.push(5);
  pq.push(3);

  cout << "elements at the top " << pq.top() << "\n";

  // min heap
  priority_queue<int, vector<int>, greater<int>> minheap;
  minheap.push(4);
  minheap.push(2);
  minheap.push(5);
  minheap.push(3);
  cout << "elements at the top " << minheap.top() << "\n";
}