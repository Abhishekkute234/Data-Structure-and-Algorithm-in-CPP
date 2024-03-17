// remove middle element 
#include<iostream>
#include<stack>
using namespace std;
void solve(stack<int> &str ,int count,int n){
    if(count==n/2){
        str.pop();
        return;
    }

    int num=str.top();
    str.pop();
// recursive call
    solve(str,count+1,n);

    str.push(num);
}

void delet_mid(stack<int> &str ,int n){
    int count=0;
    solve(str,count,n);

}

int main(){
    stack<int> str;
    str.push(10);
    str.push(20);
    str.push(30);
    str.push(40);
    str.push(50);

    delet_mid(str,5);

}
