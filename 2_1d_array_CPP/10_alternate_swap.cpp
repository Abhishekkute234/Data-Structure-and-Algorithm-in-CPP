
    
// alternate swap 
#include <iostream>
using namespace std;
void alternate(int arr[],int size){
    for(int i=0;i<size;i+=2){
        if(i+1<size){

            swap(arr[i],arr[i+1]);
        }
    } 

}
void printarray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";

}
int main(){
    int even[6]={5,7,4,6,3,9};
    int odd[5]={34,67,8,94,9};

    alternate(even,6);
    printarray(even,6);

    alternate(odd,5);
    printarray(odd,5);

}