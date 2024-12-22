
// n=2m+1
// m number do bar hai 
// only one number doesnt repet 
#include <iostream>
using namespace std;

void array(int arr[],int size){
    int ans=0;
    for(int i=0;i<size;i++){
        ans=ans^arr[i];
    }
    return ans;
}
// find all duplicte elements 