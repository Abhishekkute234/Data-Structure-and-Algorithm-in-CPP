
// search
// search
#include <iostream>
using namespace std;

bool present(int arr[3][4],int key,int row,int col){
    for(int row=0;row<3;row++){
        for(int col=0;col<4;col++){
            if(arr[row][col]==key){
                return 1;

            }

        }
    }
    return 0;


}

int main(){
    // inpute row wise
    int arr[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    cout<<"enter the element to search"<<"\n";
    int key;
    cin>>key;

    if(present(arr,key,3,4)){
        cout<<"found ";
    }
    else{
        cout<<"not found ";
    }


}