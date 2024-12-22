// Arrays using Functions 
#include<iostream>
using namespace std;
void array(int arr[],int size){
    cout<<"print the arrey "<<"\n";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    cout<<"Printing done "<<"\n";
}    
    
int main(){
    int first[15]={2,7,11};
    int second[10]={1};
    array(first,15);
    array(second,10);
    
    return 0;
}