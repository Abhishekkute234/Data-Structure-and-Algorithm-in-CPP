// recursion 

// it is basiclly use to soolve big problem which depends on small problem 

/*we need
1.base case 
2.recursive relation 
*/

// add number till n 

// factorial 
#include <iostream>
using namespace std;

int fact(int n){
    // base case 
    if(n==0){
        return 1;
    }

    return n*fact(n-1);
}

int main()
{
    int n;
    cout<<"the value of n is : ";
    cin>>n;

    int ans=fact(n);
    cout<<"\n"<<"factorial of n is : "<<ans;

}