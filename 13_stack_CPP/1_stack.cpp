#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int> s;
    // push
    s.push(2);
    s.push(3);
    s.push(4);
    // pop
    s.pop();
    // peak element (top element)
    cout<<"top element is "<<s.top()<<endl;
    // is empty or not
    if(s.empty()){
        cout<<"is empty\n";

    }

    else{
        cout<<"not empty\n";
    }

    // size
    cout<<"size of stack is \n"<<s.size();
    
}