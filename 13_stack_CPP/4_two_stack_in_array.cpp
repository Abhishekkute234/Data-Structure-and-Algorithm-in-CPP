#include<iostream>
using namespace std;
class twostack{
    int *arr;
    int top_1;
    int top_2;
    int size;

    twostack(int s){
        this->size=s;
        int top_1=-1;
        int top_2=s;
        arr= new int [s];

    }

    void push_1(int ele){
        // atleast one emty space 
         if(top_2-top_1>1){
            top_1++;
            arr[top_1]=ele;

        }

        else{
            cout<<"stack overflow\n";
        }
    }

    void push_2(int ele){
        // atleast one emty space 
         if(top_2-top_1>1){
            top_2--;
            arr[top_2]=ele;

        }

        else{
            cout<<"stack overflow\n";
        }
    }

    void pop_1(){
        if(top_1>=0){
            top_1--;
        }

        else{
            cout<<"No element is present \n";
        }

    }

    void pop_2(){
        if(top_2<size){
            top_2++;
        }

        else{
            cout<<"No element is present \n";
        }

    }


};