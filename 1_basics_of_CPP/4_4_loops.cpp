//  break
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n ";
    cin>>n;
    cout<<"print count from 1 to n "<<"\n";
    int i=1;

    for(;;){
        if(i<=n){
        cout<<i<<"\n";}
        else{
            break;
        }
        i++;
    }
}