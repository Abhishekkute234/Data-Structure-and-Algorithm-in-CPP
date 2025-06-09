
// pointers and function 
// to pass the pointer through function
#include <iostream>
using namespace std;
void print(int *p){
    cout<<*p<<"\n";//value 
    cout<<p<<"\n";//address 

}
void update(int *p){
    p=p+1;
    cout<<"inside "<<p<<"\n";
    *p=*p+1;
    
}
int sum(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    return sum;
}


int main(){
    int value =5;
    int *p=&value;

    // print(p);
    cout<<"before "<<p<<"\n";
    update(p);
    cout<<"after  "<<p<<"\n";

    int arr[5]={1,2,3,4,5};
    cout<<"sum is "<<sum(arr,5)<<"\n";
}
