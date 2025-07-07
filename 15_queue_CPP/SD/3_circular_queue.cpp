#include <iostream>
using namespace std;

class MyCircularQueue
{
public:
  int front;
  int rear;
  int *arr;
  int size;

  // Constructor
  MyCircularQueue(int k)
  {
    this->size = k; // Correct initialization
    arr = new int[size];
    front = rear = -1;
  }

  // Enqueue function
  bool enQueue(int value)
  {
    if ((rear + 1) % size == front)
    { // Correct full condition
      cout << "Queue is full" << endl;
      return false;
    }
    // If queue is empty
    else if (front == -1)
    {
      front = rear = 0;
    }
    // If rear reaches end, wrap around
    else if (rear == size - 1 && front != 0)
    {
      rear = 0;
    }
    // Normal case
    else
    {
      rear++;
    }
    arr[rear] = value;
    return true;
  }

  // Dequeue function
  bool deQueue()
  {
    if (front == -1)
    { // Queue empty
      return false;
    }
    if (front == rear)
    { // Only one element left
      front = rear = -1;
    }
    else if (front == size - 1)
    { // Wrap around case
      front = 0;
    }
    else
    {
      front++;
    }
    return true;
  }

  // Get front element
  int Front()
  {
    if (front == -1)
      return -1; // Queue empty
    return arr[front];
  }

  // Get rear element
  int Rear()
  {
    if (rear == -1)
      return -1; // Queue empty
    return arr[rear];
  }

  // Check if queue is empty
  bool isEmpty()
  {
    return front == -1;
  }

  // Check if queue is full
  bool isFull()
  {
    return (rear + 1) % size == front;
  }

  // Destructor
  ~MyCircularQueue()
  {
    delete[] arr;
  }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */
