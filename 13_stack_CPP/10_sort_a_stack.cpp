#include <iostream>
#include <stack>
using namespace std;

// Function to insert an element into the stack in sorted order
void sortedInsert(stack<int> &st, int num)
{
  // Base Case: If stack is empty OR top element is smaller, push `num`
  if (st.empty() || st.top() <= num)
  {
    st.push(num);
    return;
  }

  // Remove top element and insert `num` in sorted order
  int temp = st.top();
  st.pop();
  sortedInsert(st, num);

  // Push back the stored element
  st.push(temp);
}

// Recursive function to sort a stack
void sortStack(stack<int> &st)
{
  // Base Case: If stack is empty, return
  if (st.empty())
  {
    return;
  }

  // Remove top element
  int num = st.top();
  st.pop();

  // Recursively sort the remaining stack
  sortStack(st);

  // Insert the removed element at the correct position
  sortedInsert(st, num);
}

// Function to print the stack
void printStack(stack<int> st)
{
  while (!st.empty())
  {
    cout << st.top() << " ";
    st.pop();
  }
  cout << endl;
}

// Driver Code
int main()
{
  stack<int> st;
  st.push(3);
  st.push(1);
  st.push(4);
  st.push(2);
  st.push(5);

  cout << "Original Stack: ";
  printStack(st);

  sortStack(st); // Sort the stack

  cout << "Sorted Stack: ";
  printStack(st);

  return 0;
}
