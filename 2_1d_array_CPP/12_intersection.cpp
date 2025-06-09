//intersection
#include<iostream>
using namespace std;
int main(){
    int array_1[5]={1,2,3,7,9};
    int array_2[6]={8,4,2,6,10,9};

    for (int i=0;i<5;i++){
        for(int j=0;j<6;j++){
            if(array_1[i]==array_2[j]){
                cout<<"The value of intersection is  "<<array_1[i]<<"\n";
            }
        }
    }    
}
