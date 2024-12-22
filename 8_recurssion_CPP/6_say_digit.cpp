// say digit 
#include <iostream>
using namespace std;

int say(int n,string arr[]){

    if(n==0){
        return 0;
    }
    int digit=n%10;
    n=n/10;
    cout<< arr[digit]<<" ";

    //call
    say(n,arr);
    
}
int main()
{
    string arr[10]={"zero","one","two","three","fore","five","six"};
    int n;
    cout<<"the value of n is : ";
    cin>>n;
    cout<<"\n";
    cout<<say(n,arr);
    cout<<"\n";
}