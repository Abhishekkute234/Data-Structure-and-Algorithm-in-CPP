#include<iostream>
using namespace std;

void reverse(string s){
    int st=0;
    int e=s.length()-1;
    if(s[st] !='\0'){
        return;
    }


    if(s[st]==' '){
        e=s[st]-1;
        st=e;
        st++;
        e--;
    }
    reverse(s[])

}

int main(){
    string name;
    getline(cin,name);
    reverse(name);
    cout<<"the string after revesre is : "<<name;
}