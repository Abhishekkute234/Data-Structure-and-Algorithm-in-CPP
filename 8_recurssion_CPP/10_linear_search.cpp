//liner search present or not 
#include <iostream>
using namespace std;
bool search(int arr[],int n,int key){
    if(n==0){
        return 0;
    }
    
    
    if(arr[0]==key){
        return 1;
    }

    else{
        bool remain=search(arr+1,n-1,1);
        return remain;
    }
    
}

int main(){
    int arr[5]={3,2,5,1,6};
    bool ans=search(arr,5,1);
    if(ans){
        cout<<"the index is present ";
    }

    else{
        cout<<"not present ";
    }

}    