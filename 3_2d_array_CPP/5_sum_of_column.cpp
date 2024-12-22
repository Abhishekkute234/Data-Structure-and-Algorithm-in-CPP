//column sum
#include <iostream>
using namespace std;

int csum(int arr[3][4],int row,int col){
    cout<<"sum is ";
    for(int col=0;col<4;col++){
        int sum=0;
        for(int row=0;row<3;row++){
            sum+=arr[row][col];
            
        }
        cout<<sum<<" ";

    }
}



int main(){
    // inpute row wise
    int arr[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    csum(arr,3,4);
}
   

// print like a wave order 
// 1 6 7
// 2 5 8
// 3 4 9

#include <iostream>
using namespace std;
int main(){
    
}


