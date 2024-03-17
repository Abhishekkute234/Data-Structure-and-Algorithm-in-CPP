#include<iostream>
using namespace std;

class circular_queue{
    public:
        int *arr;
        int front;
        int rear;
        int size;
    circular_queue(int n){
        size=n;
        front=-1;
        rear=-1;
        arr=new int[size];
        
    }

    bool enqueue(int data){
        if((front==0 && rear==size-1) || (rear==(front-1)%(size-1))){
            cout<<"array is full\n";
        }

        else if(front==-1){
            front=rear=0;
        }

        else if(rear==size-1 && front!=0){
            rear=0;
            
        }

        else{
            rear++;
        }

        arr[rear]=data;
        return true;
    }


    int dequeue(){
        if(front==-1){
            return -1;

        }

        int ans=arr[front];
        arr[front]=-1;
        if(front==rear){
            front=rear=-1;
        }

        else if(front =size-1){
            front=0;//to maintain cyclic nature 
        }

        else{
            front++;
        }

        return ans;
    }

};



          



