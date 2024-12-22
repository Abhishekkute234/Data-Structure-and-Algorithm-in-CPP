// find the sum of the element in the array 
#include<iostream>
using namespace std;
int sum(int arr[],int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum=sum+arr[i];
    }
        
    return sum;
}
int main()
{
    int arr[6]={56,35,67,67,45,34};
    
    cout <<sum(arr,6)<<"\n";

}