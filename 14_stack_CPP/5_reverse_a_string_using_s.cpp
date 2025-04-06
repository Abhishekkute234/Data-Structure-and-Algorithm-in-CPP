#include<iostream>
#include<stack>
using namespace std;

int main(){
    string str="Abhishek";
    stack<char> s;
// push is satck so that it get reverse 
    for(int i=0;i<str.length();i++){
        char ch=str[i];
        s.push(ch);
    }
// then print it in an answer
    string ans="";

    while(!s.empty()){
        char ch=s.top();
        ans.push_back(ch);
        s.pop();
    }

    cout<<"answer is "<< ans;
}