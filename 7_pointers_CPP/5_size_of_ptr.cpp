
#include <iostream>
using namespace std;
int main(){
    int temp[10];
    cout<<sizeof(temp)<<"\n";//40
    int *ptr=&temp[10];
    cout<<"size of ptr  "<<sizeof(ptr)<<"\n";
    //8 
    cout<<"size of ptr  "<<sizeof(&ptr)<<"\n";   // 8
    cout<<"size of ptr  "<<sizeof(*ptr)<<"\n";    //4

}