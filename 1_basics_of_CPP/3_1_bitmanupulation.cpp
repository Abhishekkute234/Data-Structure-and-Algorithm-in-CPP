#include<iostream>
using namespace std;
int main(){
    int a=4;
    int b=6;

    cout<< " a&b  "<<(a&b)<<"\n";
    cout<< " a|b  "<<(a|b)<<"\n";
    cout<< " ~a  "<<(~a)<<"\n";
    cout<< " a^b  "<<(a^b)<<"\n";
     
    cout<<(17<<1)<<"\n"; // left shift
    cout<<(17<<2)<<"\n"; //2nd time
    cout<<(17>>1)<<"\n"; //rigth shift
    cout<<(17>>2)<<"\n"; // 2nd time
}