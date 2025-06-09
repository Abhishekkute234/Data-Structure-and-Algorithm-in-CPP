//  break
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n ";
    cin>>n;
    for(int i=2;i<n;i++){
        if(n%i==0){
            cout<<"not the prime number "<<"\n";
            break;
        }
        else{
            cout<< "is  a prime number "<<"\n";
            break;
        }
    }
}