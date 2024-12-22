
#include <iostream>
using namespace std;
int main(){
    //important concept 
    int i=3;
    int *t=&i;
    *t=*t+1;
    cout<<*t<<"\n";
    cout<<"before t "<< t<<"\n";
    t=t+1;
    cout<<"after t "<< t<<"\n";
}