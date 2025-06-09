// this also the same way to pointer 

// stack =just the allocated memory means 8,9,500 etc    
// heap = the memory which do not have specific size 

#include <iostream>
using namespace std;
int sum(int *arr,int n){
        int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        
    }
}

int main(){
    int n;
    cin>>n;

    int* arr=new int[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"the sum is "<<sum(arr,n);
}
// we use this to not to lost the extra memory in the block 