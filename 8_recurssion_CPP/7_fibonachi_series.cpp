// fibonnachi series
#include <iostream>
using namespace std;

int fibonnachi(int n){

    if(n==0){
        return 0;
    }

    else if(n==1){
        return 1;
    }

    int ans= fibonnachi(n-1)+fibonnachi(n-2);
    return ans;
}
int main()
{
    int n;
    cout<<"the value of n is : ";
    cin>>n;
    cout<<fibonnachi(n);
}