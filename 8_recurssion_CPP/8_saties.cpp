// numbers of ways to recah the n staire
// to have n numbers of staires 
// take one or two step to go to 0 to n
#include<iostream>
using namespace std;
int stair(int n){
    if(n==0){
        return  1;
    }
    if(n<0){
        return 0;
    }

    else {
        return stair(n-1)+stair(n-2);
    }

    
}

int main(){
    int n;
    cin>>n;
    cout<<stair(n);
    
}