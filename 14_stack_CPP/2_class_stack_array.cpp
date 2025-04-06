#include<iostream>
using namespace std;

class stack{
    public:
    // top for where to push 

    int top=-1;
    int *arr;
    int size;

    stack(int size){
        this->size=size;
        arr=new int[size];
        top=-1;
    }

    void push(int ele){
        if(size-top>1){
            top++;
            arr[top]=ele;

        }

        else{
            cout<<"stack overflow\n";
        }

    }

    void pop(){
        if(top>=0){
            top--;
        }

        else{
            cout<<"No element is present \n";
        }

    }

    int peek(){

        if(top>=0 ){
            return arr[top];
        }

        else{
            cout<<"stack is empty\n";
            return -1;
        }

    }

    bool is_empty(){
        if(top==-1){
            return 1;
        }

        else{
            return 0;
        }

    }

     void print() {
        if (top == -1) {
            cout << "Stack is empty\n";
            return;
        }

        cout << "Stack elements: ";
        for (int i = 0; i <= top; ++i) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

};



int main(){
    stack st(5);
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.pop();
    cout<<"Top element is "<<st.peek()<<endl;

    if(st.is_empty()){
        cout<<"the stack is empty\n";
    }
    else{
        cout<<"the stack is not empty\n";
    }
    st.print();

}