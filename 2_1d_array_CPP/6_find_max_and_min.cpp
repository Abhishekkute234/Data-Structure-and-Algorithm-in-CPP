// to print the maximun and the minimum value 
#include <iostream>
using namespace std;
int main(){
    int arr[5]={1,45,56,89,44};
    int min=arr[0];
    int max=arr[0];
     
    for(int i=0;i<5;i++){
        if(arr[i]>max){
            max=arr[i];
        }
        if(arr[i]<min){
            min=arr[i];
        }
    }
    cout<<"the max value is "<<max<<"\n";
    cout<<"the min value is "<<min<<"\n";


}  