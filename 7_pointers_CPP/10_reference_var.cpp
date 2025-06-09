// reference variable 
#include <iostream>
using namespace std;
int main(){
    int i=5;
    int &j=i;
    cout<<i<<"\n";
    i++;
    cout<<i<<"\n";
    cout<<j<<"\n";//referance 
    j++;
    cout<<j<<"\n";
    // the value of both i and j is same 
}