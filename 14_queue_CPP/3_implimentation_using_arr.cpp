#include<iostream>
using namespace std;

class Queue {
public:
    int size;
    int *arr;
    int front;
    int rear;

    Queue() {
        size = 10001;
        arr = new int[size];
        front = 0;
        rear = 0;
    }

    void enqueue(int element) {
        if (rear == size) {
            cout << "Queue is full" << endl;
        } else {
            arr[rear] = element; // Fix: Use assignment operator (=) instead of comparison operator (==)
            rear++;
        }
    }

    int dequeue() {
        if (front == rear) {
            cout << "Queue is empty" << endl;
            return -1; // You might want to return a special value to indicate an empty queue
        } else {
            int ans = arr[front];
            arr[front] = -1;
            front++;
            if (front == rear) {
                front = 0;
                rear = 0;
            }
            return ans;
        }
    }

    int getFront() { // Renamed from "front()" to avoid naming conflict
        if (front == rear) {
            return -1;
        } else {
            return arr[front];
        }
    }

    bool isEmpty() {
        return front == rear;
    }
};

int main() {
    // Your main function code here
    return 0;
}
