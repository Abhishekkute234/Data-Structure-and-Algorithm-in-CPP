// Contious statement

    
// summ from 1  to n 
//  break
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n ";
    cin>>n;
    cout<<"print the sum from 1 to n "<<"\n";
    int sum=0;

    for(int i=1;i<=n;i++){
        sum+=i;
    }
    cout<<sum<<"\n";

}