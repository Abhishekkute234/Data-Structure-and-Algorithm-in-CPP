
// ------->>>>>>  2D array <<<<----------matrix 

// liner index=column* i+j
// 2d array stores in the memorey in the form of liner array 
// intput---cin>>arr[i][j]
// output---cout<<arr[i][j]
// i=row
// j=column
#include <iostream>
using namespace std;
int main(){
    // // inpute row wise
    int arr[3][4];
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cin>>arr[i][j];
        }
    }
    // inpute column wise
    int arr[3][4];
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cin>>arr[j][i];
        }
    }
    //output 
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
}
