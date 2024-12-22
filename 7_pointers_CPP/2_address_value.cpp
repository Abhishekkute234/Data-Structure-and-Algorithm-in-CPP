
#include <iostream>
using namespace std;
int main(){
    int num=5;
    int a=num;
    cout<<"befour : "<<num<<"\n";

    a++;
    cout<<"after : "<<num<<"\n";
    //there is no chnage in num 

    //but in case of pointers it changes 
    int *ptr=&num;
     cout<<"befour : "<<num<<"\n";
    (*ptr)++;
    cout<<*ptr<<"\n";
    cout<<"after : "<<num<<"\n";

    // if you want to copy one pointer to another 
    // copy a pointer 
    int *q=ptr;
    cout<<ptr<<" - "<<q<<"\n";//same 
    cout<<*ptr<<" - "<<*q<<"\n";//same 
}