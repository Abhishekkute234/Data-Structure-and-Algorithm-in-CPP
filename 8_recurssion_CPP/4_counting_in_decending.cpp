// print the counting 
// input 5
// output5,4,3,2,1
// head call 
#include <iostream>
using namespace std;

void count(int n){
    // base case 
    if(n==0){
        return ;
    }

    cout<< n <<"\n";
    count(n-1);
}

int main()
{
    int n;
    cout<<"the value of n is : ";
    cin>>n;

    count(n);
}
// output 5,4,3,2,1
