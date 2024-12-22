
// pointers in array  
// interger 
// the 1st element of an array itself store an address 
#include <iostream>
using namespace std;
int main(){
    int arr[10]={24,67,78,89};
    //this shows the address of array
    cout<<"the address of 1st memory block is "<<arr<<"\n";//addrres
    cout<<arr[0]<<"\n";//garbage value 
    cout<<"the address of 1st memory block is "<<&arr[0]<<"\n";//address
    cout<<"the value is "<<*arr<<"\n";//value//2
    cout<<"the value is "<<*arr+1<<"\n";//3
    cout<<"the value is "<<*(arr+1)<<"\n";//3
    cout<<arr[2]<<"\n";//12 and 13 line are same
    cout<<*(arr+2)<<"\n";

    int i=3;
    cout<<i[arr]<<"\n";

    
    
}