// sum
#include <iostream>
using namespace std;
int getsum(int arr[],int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return arr[0];
    }
    int add;
    int remain=getsum(arr+1,n-1);
    add=arr[0]+remain;
    return add;
    
}