// pointers 
// the address of the two diffrent is always different

#include <iostream>
using namespace std;
int main(){
    int num=5;
    cout<<"the value of "<<num<<"\n";
    //address of operator 
    cout<< "Addess of num "<<&num<<"\n";

    int *ptr=&num;
    cout<< "value  of num "<<ptr<<"\n";
    cout<< "value  of num "<<*ptr<<"\n";

     cout<< "size of pointer "<<sizeof(num)<<"\n";//4
     cout<< "size of value  "<<sizeof(ptr)<<"\n";//8
}