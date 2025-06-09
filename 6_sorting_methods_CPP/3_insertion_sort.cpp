#include <iostream>
using namespace std;
int Isort(int arr[],int n){
    for(int i=1;i<n;i++){
        int temp=arr[i];
        int j=i-1;
        for(;j>=0;j--){
            if(arr[j]>temp){
                arr[j+1]=arr[j];
            }

            else{
                break;
            }
            
        }
    arr[j+1]=temp;    
    }
//insert the element in best example is of card 
    
}
    

int printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
} 

int main(){
    int array[5]={64,25,12,22,11};
    Isort(array,5);
    printArray(array,5);
}
