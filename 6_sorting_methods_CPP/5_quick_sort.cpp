// quick sort
#include<iostream>
using namespace std;
int partation(int arr[],int s,int e){
    int pivate=arr[s];
    int cnt=0;
    for(int i=s+1;i<=e;i++){
        if(arr[i]<=pivate){
                cnt++;
        }
    }
    // position of pivate
    int pindex=s+cnt;
    swap(arr[pindex],arr[s]);

    // left and right part
    int i=s;
    int j=e;
    while(i<pindex&&j>pindex){
        while(arr[i]<pivate){
            i++;
        }
        while(arr[j]>pivate){
            j--;
        }
        if(i<pindex&&j>pindex){
            swap(arr[i++],arr[j--]);
        }
    }

}

void Qsort(int arr[],int s,int e){
    if(s>=e){
        return;
    }

    // partation
    int p=partation(arr,s,e);
    // recursion
    Qsort(arr,s,p-1);
    Qsort(arr,p+1,e);
    

}
int main(){
    int arr[5]={5,4,3,2,1};
    int n=5;
    Qsort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
 