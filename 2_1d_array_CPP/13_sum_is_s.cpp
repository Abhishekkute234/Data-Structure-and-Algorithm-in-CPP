
// find the pair is the array whose sum is = s 
#include <iostream>
using namespace std;
int main(){
    int array[5]={1,2,3,4,5};
    int s=5;

    for(int i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
            if(array[i]+array[j]==s){
                cout<<array[i]<<" "<<array[j]<<"\n";
            }
        }
    }
}