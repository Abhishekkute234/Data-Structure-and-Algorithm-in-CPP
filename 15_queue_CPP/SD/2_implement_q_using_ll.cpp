#include <iostream>
using namespace std;

class Node
{
public:
  int data;
  Node *next;

  Node(int data)
  {
    this->data = data;
    this->next = NULL;
  }

  ~Node()
  {
    // destructor (optional cleanup)
    if (next != NULL)
    {
      delete next;
      next = NULL;
    }
  }
};

class MyStack
{
private:
  Node *head;

public:
  MyStack()
  {
    head = NULL;
  }

  void push(int x)
  {
    Node *newNode = new Node(x);
    newNode->next = head;
    head = newNode;
  }

  int pop()
  {
    if (head == NULL)
    {
      cout << "Stack Underflow\n";
      return -1;
    }
    int val = head->data;
    Node *temp = head;
    head = head->next;
    temp->next = NULL;
    delete temp;
    return val;
  }

  int top()
  {
    if (head == NULL)
    {
      cout << "Stack is empty\n";
      return -1;
    }
    return head->data;
  }

  bool empty()
  {
    return head == NULL;
  }
};

// Example usage
int main()
{
  MyStack *st = new MyStack();
  st->push(10);
  st->push(20);
  st->push(30);

  cout << "Top: " << st->top() << endl;                      // 30
  cout << "Pop: " << st->pop() << endl;                      // 30
  cout << "Top: " << st->top() << endl;                      // 20
  cout << "Empty? " << (st->empty() ? "Yes" : "No") << endl; // No

  st->pop();
  st->pop();
  cout << "Empty after all pops? " << (st->empty() ? "Yes" : "No") << endl; // Yes

  delete st;
  return 0;
}
