#include <iostream>
using namespace std;

class MyQueue {
public:
    int front;
    int rear;
    int size;
    int *arr;

    MyQueue() {
        size = 10001;
        arr = new int[size];
        front = 0;
        rear = 0;
    }

    void push(int x) {
        if(rear == size) {
            cout << "Queue is full" << endl;
            return;
        }
        arr[rear] = x;
        rear++;
    }

    int pop() {
        if(front == rear) {
            return -1;  // Queue is empty
        }
        int ans = arr[front];  // Store the front element
        front++;
        if(front == rear) {  // Reset queue if empty
            front = 0;
            rear = 0;
        }
        return ans;
    }

    int peek() {
        if(front == rear) {
            return -1;  // Queue is empty
        }
        return arr[front];
    }

    bool empty() {
        return front == rear;
    }

    ~MyQueue() {
        delete[] arr;  // Free dynamically allocated memory
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
