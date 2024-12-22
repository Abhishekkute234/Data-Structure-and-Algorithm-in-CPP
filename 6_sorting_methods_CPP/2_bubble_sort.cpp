// ------>>>>>>> Bubble sort <<<<<<<------
#include <iostream>
using namespace std;
int Busort(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){

        if(arr[j]>arr[j+1]){
            swap(arr[j+1],arr[j]);
        }
        }
    }
}
    

       

int printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
} 
int main(){
    int array[5]={64,25,12,22,11};
    Busort(array,5);
    printArray(array,5);
}
 