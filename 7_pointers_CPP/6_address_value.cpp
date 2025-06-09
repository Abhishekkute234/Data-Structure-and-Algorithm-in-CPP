#include <iostream>
using namespace std;
int main(){
    int a[20]={1,2,3,45,6,8};
    // line 6,7,8 have same output 
    cout<<&a[0]<<"\n";
    cout<<&a<<"\n";
    cout<<a<<"\n";

    int *p=&a[0];
    cout<<p<<"\n";//address
    cout<<*p<<"\n";//1
    cout<<&p<<"\n";//address

}