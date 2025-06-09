#include <iostream>
using namespace std;

int power(int n){
    // base case 
    if(n==0){
        return 1;
    }

    int ans=2*power(n-1);

    return ans;

}

int main()
{
    int n;
    cout<<"the value of n is : ";
    cin>>n;

    int ans=power(n);
    cout<<"\n"<<" 2 to the power "<<n<<" is :"<<ans;

}