#include <iostream>
using namespace std;

void count(int n){
    // base case 
    if(n==0){
        return ;
    }

    count(n-1);
    cout<< n <<"\n";
}

int main()
{
    int n;
    cout<<"the value of n is : ";
    cin>>n;

    count(n);
}
// output 1,2,3,4,5
