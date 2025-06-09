#include <iostream>
using namespace std;
int selection(int arr[],int n){
    for(int i=0;i<n;i++){
        int min=i;

    for(int j=i+1;j<n;j++){
        if(arr[min]>arr[j]){
            min=j;
        }
    }
    int temp=0;
    temp=arr[min];

    arr[min]=arr[i];
    arr[i]=temp;
    
    }

}
int printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[6]={75,70,30,45,61,55};
    selection(arr,6);
    printarray(arr,6);

}
 