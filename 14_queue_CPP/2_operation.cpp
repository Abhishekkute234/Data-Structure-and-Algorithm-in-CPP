#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);

    cout<<"size of q is "<< q.size() <<endl;
    q.pop();
    cout<<"peek elemnt is "<<q.front()<<endl;
    if(q.empty()){
        cout<<"Q is empty "<<endl;

    }

    else{
        cout<<"Q is not empty "<<endl;
    }
}