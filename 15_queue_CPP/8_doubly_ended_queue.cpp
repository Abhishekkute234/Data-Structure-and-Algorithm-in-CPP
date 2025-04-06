// input and output from both side 
#include<iostream>
using namespace std;

#include <iostream>
using namespace std;

class Deque {
private:
    int *arr;
    int front;
    int rear;
    int size;
    int capacity;

public:
    Deque(int capacity) {
        this->capacity = capacity;
        arr = new int[capacity];
        front = -1;
        rear = 0;
        size = 0;
    }

    void insertFront(int element) {
        if (isFull()) {
            cout << "Deque is full. Cannot insert at front." << endl;
            return;
        }

        if (front == -1) {
            front = 0;
            rear = 0;
        } else if (front == 0) {
            front = capacity - 1;
        } else {
            front--;
        }

        arr[front] = element;
        size++;
    }

    void insertRear(int element) {
        if (isFull()) {
            cout << "Deque is full. Cannot insert at rear." << endl;
            return;
        }

        if (front == -1) {
            front = 0;
            rear = 0;
        } else if (rear == capacity - 1) {
            rear = 0;
        } else {
            rear++;
        }

        arr[rear] = element;
        size++;
    }

    void deleteFront() {
        if (isEmpty()) {
            cout << "Deque is empty. Cannot delete from front." << endl;
            return;
        }

        if (front == rear) {
            front = -1;
            rear = 0;
        } else if (front == capacity - 1) {
            front = 0;
        } else {
            front++;
        }

        size--;
    }

    void deleteRear() {
        if (isEmpty()) {
            cout << "Deque is empty. Cannot delete from rear." << endl;
            return;
        }

        if (front == rear) {
            front = -1;
            rear = 0;
        } else if (rear == 0) {
            rear = capacity - 1;
        } else {
            rear--;
        }

        size--;
    }

    int getFront() {
        if (isEmpty()) {
            cout << "Deque is empty." << endl;
            return -1;
        }
        return arr[front];
    }

    int getRear() {
        if (isEmpty() || rear < 0) {
            cout << "Deque is empty." << endl;
            return -1;
        }
        return arr[rear];
    }

    bool isEmpty() {
        return size == 0;
    }

    bool isFull() {
        return size == capacity;
    }
};

int main() {
    Deque deque(5);

    deque.insertFront(1);
    deque.insertRear(2);
    deque.insertRear(3);
    deque.insertFront(4);

    cout << "Front element: " << deque.getFront() << endl;
    cout << "Rear element: " << deque.getRear() << endl;

    deque.deleteFront();
    deque.deleteRear();

    cout << "Front element after deletion: " << deque.getFront() << endl;
    cout << "Rear element after deletion: " << deque.getRear() << endl;

    return 0;
}
