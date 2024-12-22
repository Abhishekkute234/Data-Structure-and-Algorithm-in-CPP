#include <iostream>
using namespace std;
bool search(int ar[],int size,int key){
    for(int i=0;i<size;i++){
        if(ar[i]==key){
            return 1;
        }
    }
    return 0;
}
        
int main(){
    int arr[10]={5,7,-2,10,22,-2,0,5,22,1};

    //whether 1 is present in it or not
    cout<<"Enter the key :"<<"\n";
    int key;
    cin>>key;

    bool found=search(arr,10,key);

    if(found){
        cout<<"Key is present "<<"\n";
    }
    else{
        cout<<"Key is not present "<<"\n";
    }

    return 0;
}  