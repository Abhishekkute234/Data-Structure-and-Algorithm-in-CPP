// binary search is present or not 
#include <iostream>
using namespace std;
bool binary(int arr[],int s,int e,int key){
    
    int m=s+(e-s)/2;

    if(s>e){
        return false;
    }
    if(arr[m]==key){
        return true;
    }

    
    if(arr[m]<key){
        return binary(arr,m+1,e,key);

    }
    else if(arr[m]<key){
        return binary(arr,s,m-1,key);
        
    }
}


int main(){
    int arr[6]={2,3,4,5,6,7};
    cout<<"present or not "<<binary(arr,0,5,8)<<"\n";

}    